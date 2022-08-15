CC = clang++
CC_FLAGS = -O3 -std=c++20 -I./include

ifeq ($(OS),Windows_NT)
		OUTPUT = ../bin/sl-emulator.exe
else
		OUTPUT = ../bin/sl-emulator
endif

all: compile

compile: $(wildcard ./src/*.cpp)
		$(CC) $(CC_FLAGS) $? -o $(OUTPUT)
