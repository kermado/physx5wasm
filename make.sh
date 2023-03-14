#!/bin/bash

cd ./physx/compiler/emscripten-release/
rm sdk_source_bin/physx-js-webidl.*
make -j8
