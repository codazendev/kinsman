#!/bin/bash
foot -- bash -c 'cd ~/git/codazendev/kinsman; lazygit; exec bash' & > /dev/null 2>&1
foot -- bash -c 'cd ~/git/codazendev/kinsman; helix; exec bash' & > /dev/null 2>&1
