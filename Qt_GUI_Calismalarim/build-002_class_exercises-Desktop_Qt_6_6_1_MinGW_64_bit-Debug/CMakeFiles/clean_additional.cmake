# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "002_class_exercises_autogen"
  "CMakeFiles\\002_class_exercises_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\002_class_exercises_autogen.dir\\ParseCache.txt"
  )
endif()
