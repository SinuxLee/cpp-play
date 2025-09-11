add_rules("mode.debug", "mode.release")
set_languages("c++17")

add_requires("spdlog 1.15", "catch2 3.8", "fmt 11.1")

target("test_demo")
    set_kind("binary")
    add_packages("catch2")
    add_files("tests/demo.cpp")

target("log")
    set_kind("binary")
    add_packages("spdlog", "fmt")
    add_files("src/*.cpp")

