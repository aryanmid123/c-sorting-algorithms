#!/usr/bin/env bash

make clean

make

for filename in test/*; do
        [[ $filename =~ _test$ ]] && "$filename"
done