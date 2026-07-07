.PHONY: all clean run stages

all: programm

programm:

	mkdir -p build
	gcc -Wall -Wextra -std=c99 -g -Iinclude -c ./main3.c -o build/main3.o
	gcc -Wall -Wextra -std=c99 -g -Iinclude -c ./main3c.c -o build/main3c.o
	gcc -Wall -Wextra -std=c99 -g -o programm build/main3.o build/main3c.o

stages:
	mkdir -p build
	gcc -E -Iinclude ./main3.c -o build/main3.i
	gcc -E -Iinclude ./main3c.c -o build/main3c.i
	gcc -S -Iinclude ./main3.c -o build/main3.s
	gcc -S -Iinclude ./main3c.c -o build/main3c.s
	gcc -c -Iinclude ./main3.c -o build/main3.o
	gcc -c -Iinclude ./main3c.c -o build/main3c.o

run:
	./programm

clean:
	rm -rf build programm
