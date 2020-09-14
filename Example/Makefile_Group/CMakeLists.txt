
project(Make_Group)

cmake_minimum_required(VERSION 3.16)

include_directories(
    inc
)

aux_source_directory(src DIR_SRCS)

add_executable(
    main
    ${DIR_SRCS}
)

add_library(
    cShape
    STATIC
    ${DIR_SRCS}
)
