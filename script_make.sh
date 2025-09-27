#!/bin/bash

# Loop through all ex00, ex01, ..., ex06 folders
for dir in ex*; do
    if [ -d "$dir" ] && [ -f "$dir/Makefile" ]; then
        echo "Cleaning in $dir ..."
        make -C "$dir" 
    fi
done

echo "All exercises cleaned ✅"
