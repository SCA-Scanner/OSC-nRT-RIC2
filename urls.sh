#!/bin/bash

# Path to the text file containing remote repo URLs
URLS_FILE="osc_links.txt"

# Remote branch
REMOTE_BRANCH="master"

# Check if the URLs file exists
if [ ! -f "$URLS_FILE" ]; then
    echo "Error: URLs file not found: $URLS_FILE"
    exit 1
fi

# Loop through each URL in the file and run git subtree command
while IFS= read -r url; do
    # Extract the last word of the URL
    local_dir=$(basename "$url")

    echo "Adding subtree for URL: $url"
    git subtree add --prefix "$local_dir" "$url" "$REMOTE_BRANCH" --squash
    if [ $? -ne 0 ]; then
        echo "Error: Failed to add subtree for URL: $url"
    else
        echo "Subtree added successfully for URL: $url"

        # Check if there are any changes to commit
        if ! git diff-index --quiet HEAD --; then
            # Commit the changes
            git add .
            git commit -m "Added subtree from $url"
            if [ $? -ne 0 ]; then
                echo "Error: Failed to commit changes for URL: $url"
            else
                echo "Changes committed successfully for URL: $url"
            fi
        else
            echo "No changes to commit for URL: $url"
        fi
    fi
done < "$URLS_FILE"
