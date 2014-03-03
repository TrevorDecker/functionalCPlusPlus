# the compiler to use.
CC=g++

all: test.cpp ArraySequence.cpp ArraySequence.h
	cc -o test test.cpp
