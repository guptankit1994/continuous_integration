cc = gcc -o

.PHONY: main clean

main: test.c
	$(cc) main test.c

clean:
	rm -rf *.o main

run:
	./main
