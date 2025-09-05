build:
	mkdir -p build
	gcc -std=c11 -Wall -Wextra -Wno-format-extra-args -O2 -o build/program main.c

test: build
	./build/program

clean:
	rm -rf build
