# Set Name of project and language
project(MelodyPatternRecogniser LANGUAGES CXX)

# Set cmake version
cmake_minimum_required(VERSION 3.0)

# set build type to Debug/Release
set(CMAKE_BUILD_TYPE "Debug")

#Dependencies
find_package(Qt5 REQUIRED COMPONENTS Widgets PrintSupport)

#Qt flags
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Create executable using the specified source files
add_executable(${PROJECT_NAME}
    src/main.cpp
    src/ui/widget.cpp
    src/ui/widget.h
    src/ui/widget.ui
    src/ui/customplot/qcustomplot.h
    src/ui/customplot/qcustomplot.cpp
    src/app/common/control.h
    src/app/common/control.cpp
    src/app/acquisition/convert.h
    src/app/acquisition/convert.cpp

    )

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/customplot
    ${CMAKE_CURRENT_SOURCE_DIR}/src/app
    ${CMAKE_CURRENT_SOURCE_DIR}/src/app/common
    ${CMAKE_CURRENT_SOURCE_DIR}/src/app/acquisition
    )

# Link external and internal Libs
IF(WIN32)
#SET(GUIDO_DIR ${GUIDO_DIR} CACHE PATH "guidodir" FORCE)
SET(GUIDO_DIR "C:/Users/rebec/OneDrive/Desktop/guidolib-dev/guidoInstall")
target_include_directories(${PROJECT_NAME} PRIVATE
    $<INSTALL_INTERFACE:/include/guido>
    $<BUILD_INTERFACE:${GUIDO_DIR}/include/guido>)

find_library(GUIDO_LIB GUIDOEngine HINTS ${GUIDO_DIR}/lib)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::PrintSupport ${GUIDO_LIB})

#ELSEIF(UNIX)

#target_link_libraries(${PROJECT_NAME} PRIVATE GUIDOEngine)
ENDIF(WIN32)



# Define required c++ standard to C++11
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_11)

# Set compile options, enable warnings
target_compile_options(${PROJECT_NAME} PRIVATE
$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>: -Wall>
$<$<CXX_COMPILER_ID:MSVC>: /W3>
)
