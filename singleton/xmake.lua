add_rules("mode.debug", "mode.release")

target("singleton")
    set_kind("binary")
    add_files("src/*.cpp")
