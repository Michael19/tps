# API для перевода фраз


cmake_minimum_required(VERSION 2.8)

project(tps)



file(GLOB_RECURSE helloworld_SRC
    "*.h"
    "*.cpp"
)

add_executable(${PROJECT_NAME} ${helloworld_SRC})
