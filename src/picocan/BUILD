load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "picocan",
    srcs = [
        "app.c",
        "drv_canfdspi_api.c",
        "drv_spi.c",
        "led.c",
    ],
    hdrs = [
        "app.h",
        "common.h",
        "drv_canfdspi_api.h",
        "drv_canfdspi_defines.h",
        "drv_canfdspi_register.h",
        "drv_spi.h",
        "led.h",
    ],
    copts = ["-DMCP25xxFD"],
    deps = [
        "@pico-sdk//src/rp2_common/hardware_i2c",
        "@pico-sdk//src/rp2_common/hardware_spi",
        "@pico-sdk//src/rp2_common/pico_stdio_usb",
        "@pico-sdk//src/rp2_common/pico_stdlib",
    ],
)

cc_binary(
    name = "picocan_main.elf",
    srcs = ["main.c"],
    deps = [
        ":picocan",
    ],
)
