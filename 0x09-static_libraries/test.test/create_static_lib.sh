#!/bin/bash

gcc -fPIC -c *.c
rm *.c
rm main.h
ar rc *.o
rm *.o
