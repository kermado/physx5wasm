#!/bin/bash

cd ./physx
rm -rf compiler/emscripten-*
./generate_projects.sh emscripten
