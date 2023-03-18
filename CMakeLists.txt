cmake_minimum_required(VERSION 3.1)

set(PROJECT_NAME Calculator)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic)

project(${PROJECT_NAME} VERSION 0.1
                        DESCRIPTION "Calculator on C++ and Qt framework"
                        HOMEPAGE_URL "https://github.com/Ganfanman/Calculator"
                        LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

set(GUI_HEADERS GUI/include/window.h)
set(GUI_SOURCES GUI/src/window.cpp)

add_library(
    ${PROJECT_NAME}_LIB
    ${GUI_HEADERS}
    ${GUI_SOURCES}
)

target_link_libraries(
    ${PROJECT_NAME}_LIB
    PUBLIC Qt::Widgets
)

target_include_directories(${PROJECT_NAME}_LIB PUBLIC GUI/include)

add_executable(
    ${PROJECT_NAME}_EXE
    GUI/gui.cpp
)
target_link_libraries(
    ${PROJECT_NAME}_EXE
    ${PROJECT_NAME}_LIB
)
add_dependencies(${PROJECT_NAME}_EXE ${PROJECT_NAME}_LIB)
