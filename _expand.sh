#!/bin/bash
#***************************** Copyright © Jonathon Bell. All rights reserved.
#**
#**
#**  Version : $Header:$
#**
#**
#**  Purpose : 
#**
#**
#**  Comments: This file uses a tab size of 2 spaces.
#**                                                                     0-0
#**                                                                   (| v |)
#***********************************************************************w*w***

expand()
{
  gpp  -U "" "" "(" "," ")" "(" ")" "#" "!"       \
       -M "\n#\w" "\n" " " " " "\n" "" ""         \
       +c "/*" "*/" +c "//" "\n" +c "\\\n" ""     \
       -I .                                       \
       $*
}

for file in $(find _pages -name "*.md")
do
  expand ${file} -o ${file/_pages/pages}
done

#*****************************************************************************
