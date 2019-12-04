cc_library(
    name = "rocket",
    srcs = ["rocket.cpp"] + select({
        "//rocket:windows": ["rocket_cruise_windows.cpp"],
        "//rocket:linux": ["rocket_cruise_linux.cpp"],
    }),
    hdrs = ["rocket.hpp"],
    visibility = ["//visibility:public"],
)

config_setting(
    name = "windows",
    values = {
        "cpu": "x64_windows",
    },
)

config_setting(
    name = "linux",
    values = {
        "cpu": "k8",
    },
)

cc_test(
    name = "rocket_test",
    srcs = ["rocket_test.cpp"],
    deps = [":rocket"],
)
