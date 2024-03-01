# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/PyQtSheets_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/PyQtSheets_autogen.dir/ParseCache.txt"
  "PyQtSheets_autogen"
  )
endif()
