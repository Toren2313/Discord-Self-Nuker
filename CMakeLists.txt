cmake_minimum_required(VERSION 3.29)
project(discord_self_nuker)

find_package(cpr REQUIRED)
find_package(OpenSSL REQUIRED)

file(GLOB_RECURSE discord_self_nuker_SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB_RECURSE discord_self_nuker_HEADERS CONFIGURE_DEPENDS "src/*.h")
set(discord_self_nuker_INCLUDE_DIRS "")

include_directories(${discord_self_nuker_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/src)
add_executable(${PROJECT_NAME} ${discord_self_nuker_SOURCES})

find_program(CLANG_TIDY "clang-tidy")

if(CLANG_TIDY)
  set(CMAKE_CXX_CLANG_TIDY
    "${CLANG_TIDY}"
    "-checks=*"
    "-fix"
  )
endif()

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-allow-multiple-definition")

foreach(_headerFile ${discord_self_nuker_HEADERS})
get_filename_component(_dir ${_headerFile} PATH)
list(APPEND discord_self_nuker_INCLUDE_DIRS ${_dir})
endforeach()

list(REMOVE_DUPLICATES discord_self_nuker_INCLUDE_DIRS)
target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr OpenSSL::SSL OpenSSL::Crypto)