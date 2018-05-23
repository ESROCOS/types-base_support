# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


cmake_minimum_required(VERSION 3.3)
# required version 3.3: provides "IN_LIST" operator in if()

project(base_support)

include($ENV{ESROCOS_CMAKE})
esrocos_init()

esrocos_init()

add_subdirectory(src)


