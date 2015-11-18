#!/bin/bash

# Change working directory
cd $(dirname $0)

if ! grep "$(pwd)/build" /proc/mounts > /dev/null; then
  sudo -k mount -t tmpfs tmpfs build
fi
