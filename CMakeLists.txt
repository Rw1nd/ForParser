cmake_minimum_required(VERSION 3.14)
project(ForParser)

set(CMAKE_CXX_STANDARD 17)

set(ANTLRINCLUDE ${PROJECT_SOURCE_DIR}/../antlr4-cpp-runtime-4.8-macos/antlr4-runtime/)

aux_source_directory(${PROJECT_SOURCE_DIR}/Cfor PARSERDIR)

include_directories(${ANTLRINCLUDE})
include_directories(${PROJECT_SOURCE_DIR}/Cfor)
link_directories(${PROJECT_SOURCE_DIR}/../antlr4-cpp-runtime-4.8-macos/lib)


add_executable(ForParser
        main.cpp
        ForVisitor.cpp
        ${PARSERDIR}
        )

target_link_libraries(ForParser antlr4-runtime z curses m xml2)