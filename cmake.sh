#!/bin/bash -e

cd $(dirname "$0")
./mount.sh

cd build
cmake ..
