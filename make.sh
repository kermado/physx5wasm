#!/bin/bash

cd ./physx/compiler/emscripten-release/
make -j$(nproc)
