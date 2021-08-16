all: economics.c
	gcc economics.c -o main
clean:
	rm -f a.out main