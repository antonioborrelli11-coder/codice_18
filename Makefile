build:
	mkdir -p build
	gcc -std=c11 -Wall -Wextra -O2 -o build/program src/main.c

test: build
	./build/program
