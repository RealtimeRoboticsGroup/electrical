
# How to Build Blink

Here's how to build the classic blink program for the 2350 (pico 2):

```bash
bazel build \
    --aspects @pico-sdk//tools:uf2_aspect.bzl%pico_uf2_aspect \
    --output_groups=+pico_uf2_files \
    //sample:blink.elf
```