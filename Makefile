#DEBUG MAKEFILE
training:
	@clear
	@g++ main.cpp -std=c++23 -Wall -Wextra -Wshadow -Wconversion -Wpedantic -fsanitize=undefined,address -O0 -ggdb -o train
	@chmod 755 train
	@./train