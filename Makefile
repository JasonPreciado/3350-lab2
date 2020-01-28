all: donut

.PHONY: clean

donut: lab2.c
	gcc -Wall -o donut lab2.c -lm

clean:
	@rm -rf a.out donut 
