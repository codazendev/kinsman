#!/bin/bash

mkdir -p ../build
pushd ../build
c++ `sdl2-config --cflags --libs` ../src/kinsman.cpp -o kinsman
popd
