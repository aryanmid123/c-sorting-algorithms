#!/usr/bin/env bash

set -e

make clean

make

for filename in test/*; do
       if [[ $filename =~ _test$ ]]
        then
            "$filename"
        fi
done