cmake_minimum_required (VERSION 2.6)
project (LogCatParser)
include(GNUInstallDirs)
include_directories(include)
add_executable(LogCatParser src/logcatParser.cpp)
target_compile_options(LogCatParser PRIVATE
  -Wall 
)