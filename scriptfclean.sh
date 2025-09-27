#!/bin/bash

for dir in ex*; do
    if [ -d "$dir" ] && [ -f "$dir/Makefile" ]; then
        echo "Cleaning in $dir ..."
        make -C "$dir" fclean
    fi
done

echo "All exercises cleaned ✅"
