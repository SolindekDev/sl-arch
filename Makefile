CC = g++
CC_FLAGS = -O3 -Wextra -Werror -std=c++20 -I./include

ifeq ($(OS),Windows_NT)
	OUTPUT = ./Build/oak.exe
else
	OUTPUT = ./Build/oak
endif

all: compile

compile: $(wildcard ./src/*.cpp)
	$(CC) $(CC_FLAGS) $? -o $(OUTPUT)
