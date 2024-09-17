# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appFileSorter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appFileSorter_autogen.dir\\ParseCache.txt"
  "appFileSorter_autogen"
  )
endif()
