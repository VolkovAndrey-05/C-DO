include .make/lint.mk
.Phony: all clean run

all: appendix/programm

appendix/programm:
	gcc $(BASECOM) -Iinclude -c src/main3.c -o appendix/main3.o
	gcc $(BASECOM) -Iinclude -c src/main3c.c -o appendix/main3c.o
	gcc $(BASECOM) -o appendix/programm appendix/main3.o appendix/main3c.o
stages:
	gcc -E -Iinclude src/main3.c -o appendix/main3.i
	gcc -E -Iinclude src/main3c.c -o appendix/main3c.i
	gcc -S -Iinclude src/main3.c -o appendix/main3.s
	gcc -S -Iinclude src/main3c.c -o appendix/main3c.s
	gcc -c -Iinclude src/main3.c -o appendix/main3.o
	gcc -c -Iinclude src/main3c.c -o appendix/main3c.o
run:
	./appendix/programm
clean:
	rm -rf appendix
