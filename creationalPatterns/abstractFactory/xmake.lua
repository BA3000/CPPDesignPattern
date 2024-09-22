add_rules("mode.debug", "mode.release")

target("abstractFactory")
    set_kind("binary")
    add_files("src/*.cpp")
