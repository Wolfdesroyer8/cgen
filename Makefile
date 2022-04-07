cgen: main.c
	clang main.c -o cgen -g -O3 -std=gnu11 -Wall
install: cgen
	install cgen /usr/bin/cgen
