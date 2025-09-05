build:
	mkdir -p build
	gcc -std=c11 -Wall -Wextra -O2 -o build/program main.c

clean:
	rm -rf build
