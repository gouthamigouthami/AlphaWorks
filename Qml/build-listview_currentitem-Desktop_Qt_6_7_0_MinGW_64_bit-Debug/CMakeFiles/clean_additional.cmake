# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\applistview_currentitem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\applistview_currentitem_autogen.dir\\ParseCache.txt"
  "applistview_currentitem_autogen"
  )
endif()
