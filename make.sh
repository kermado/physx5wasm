#!/bin/bash

cd ./physx/compiler/emscripten-release/
make -j$(nproc)

cd ../emscripten-debug
make -j$(nproc)

cd ../emscripten-checked
make -j$(nproc)

cd ../emscripten-profile
make -j$(nproc)