#==================================================================================
#   Copyright (c) 2021 Nokia
#   Copyright (c) 2021 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================

# this uses {X}fm which can be cloned from: https://gitlab.com/rouxware/xfm

docs = rel-notes
src = rel-notes.xfm
imbed_src =
desired_out = rst

include ../master.mk

XPATH = XFM_PATH=.:/usr/local/share/xfm

# -----------------------------------------------------------------------------------

# build and push all .rst files into scraper directory
all:    $(docs:%=%.rst)
	cp *.rst ../../../docs/

rel-notes.xfm: always
	gen_rel_notes.sh >rel-notes.xfm

rel-notes.rst: rel-notes.xfm $(imbed_src)

# we force the .rst docs to always be out of date so that we don't have to
# jump hoops to ensure that they build for make publish. (See hack rule
# at the end of the file.)
#
$(docs:%=%.rst): always

publish: rel-notes.rst
	cp *.rst ../../../docs/

# intermeidate junk that might straggle
clean:
	rm -fr *.bcnfile *.ca *.ecnfile *.sp

# Destroy anything that can be built
nuke: clean
	rm -fr *.md *.ps *.pdf *.txt *.rst *.toc
	rm -fr rel-notes.xfm

# make hack to force a rule to always be out of date
always:

