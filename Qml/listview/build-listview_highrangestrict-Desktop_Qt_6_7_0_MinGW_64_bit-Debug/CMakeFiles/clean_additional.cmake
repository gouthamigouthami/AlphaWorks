# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\applistview_highrangestrict_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\applistview_highrangestrict_autogen.dir\\ParseCache.txt"
  "applistview_highrangestrict_autogen"
  )
endif()
