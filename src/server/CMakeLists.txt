
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_USE_RELATIVE_PATHS on)

SET(CXX_FLAGS
  -Wall
  -Wextra
  -g
  -std=c++11
  )
STRING(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

SET(ASIO_PATH "./thirdparty/asio-1.10.6/include/asio")
SET(SPDLOG_PATH "./thirdparty/spdlog/include/spdlog")

INCLUDE_DIRECTORIES(${ASIO_PATH})
INCLUDE_DIRECTORIES(${SPDLOG_PATH})
INCLUDE_DIRECTORIES(${PROJECT_BINARY_PATH})

SET(SRC 
  test.cpp
  node_session.cpp
  node.cpp)

ADD_EXECUTABLE(test ${SRC})

