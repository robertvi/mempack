#!/bin/bash

#set this variable to activate
#ie:
#  DO_INSTALLS="true" ./robertvi_temporary_files/build_script.sh
if [[ "$DO_INSTALLS" == "true" ]]; then
    #tested on ubuntu jammy using boost lib version 1.74
    sudo apt install libboost-dev
    cat /usr/include/boost/version.hpp | grep 'define BOOST_LIB_VERSION'
fi

make clean
make kk_plot BOOST=/usr/include/boost


g++ -Wno-write-strings \
    -Wno-deprecated \
    -I/usr/include/boost \
    -I/usr/include/ \
    -lm \
    -O2 \
    robertvi_temporary_files/test1.cpp \
    -o robertvi_temporary_files/test1

