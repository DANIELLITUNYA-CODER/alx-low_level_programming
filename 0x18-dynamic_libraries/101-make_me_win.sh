#!/bin/bash

# Create a symbolic link to the gm program in /tmp directory
ln -s /path/to/gm /tmp/gm

# Compile and load the shared library
gcc -Wall -fPIC -shared -o /tmp/libgm.so -xc - <<'EOF'
#include <stdio.h>
#include <stdlib.h>

int rand(void) {
    return 9;
}

void srand(unsigned int seed) {
    // Do nothing
}
EOF

# Run the gm program using the symbolic link in /tmp directory
LD_PRELOAD=/tmp/libgm.so /tmp/gm 9 8 10 24 75 9

# Remove the symbolic link
rm /tmp/gm /tmp/libgm.so

