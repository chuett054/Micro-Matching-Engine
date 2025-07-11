cmake_minimum_required(VERSION 3.12)
project(MicroMatchingEngine LANGUAGES CXX)

cmake_policy(SET CMP0167 NEW)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Boost REQUIRED COMPONENTS system thread)
find_package(yaml-cpp REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${Boost_INCLUDE_DIRS}
)


file(COPY
  ${CMAKE_SOURCE_DIR}/config
  DESTINATION ${CMAKE_BINARY_DIR}
)


add_executable(engine
  src/main.cpp
  #todo:  add other .cpp files…
)

target_link_libraries(engine
  PRIVATE
    ${Boost_LIBRARIES}       
    yaml-cpp::yaml-cpp       
    pthread                  
)

# (Optional) Testing stubs
# enable_testing()
# add_subdirectory(tests)