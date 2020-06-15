cmake_minimum_required(VERSION 2.4)

project(SuperHackTool5000)

set(CMAKE_INSTALL_PREFIX /usr/bin)

add_executable(SuperHackTool5000 superHackerEntryPoint.cpp superHackerASCIIArt.h)
install(TARGETS SuperHackTool5000
    DESTINATION ${CMAKE_INSTALL_PREFIX}
)

set(CPACK_PACKAGE_NAME "SuperHackTool5000")
set(CPACK_PACKAGE_VERSION "16.0.0")
include(CPack)
