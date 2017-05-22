cmake_minimum_required(VERSION 3.7)
project(TLS_Server_libbotan)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -O2 -Wall -DNDEBUG")

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++0x")
set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
set(CMAKE_XCODE_ATTRIBUTE_GCC_VERSION "com.apple.compilers.llvm.clang.1_0")
set(CMAKE_MACOSX_RPATH 1)

set(SOURCE_FILES main.cpp tls_client.cpp tls_server.cpp credentials.h cli.h)

include_directories("${ROOT_SOURCE_DIR}/usr/local/include/botan-2/")

add_executable(TLS_Server_libbotan ${SOURCE_FILES})


SET(CMAKE_EXE_LINKER_FLAGS
        "${CMAKE_EXE_LINKER_FLAGS} -Wl,-rpath -Wl,/usr/local/lib,-L/usr/local/lib")

TARGET_LINK_LIBRARIES(TLS_Server_libbotan botan-2)

# TARGET_LINK_LIBRARIES(TLS_Server_libbotan "/usr/local/lib/libbotan-2.dylib")
