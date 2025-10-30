#!/bin/bash

mkdir -p ../build
pushd ../build
bear -- c++ `sdl2-config --cflags --libs` ../src/kinsman.cpp -o kinsman -g
popd
