# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\lamda_expre_signal_slot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\lamda_expre_signal_slot_autogen.dir\\ParseCache.txt"
  "lamda_expre_signal_slot_autogen"
  )
endif()
