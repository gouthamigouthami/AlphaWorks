# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\applistview_marginsapply_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\applistview_marginsapply_autogen.dir\\ParseCache.txt"
  "applistview_marginsapply_autogen"
  )
endif()
