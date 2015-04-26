CC = gcc
CFLAGS = -Wall -g

all: libnorand.so libsamerand.so main

libnorand.so: libnorand.o
	$(CC) -shared $(CFLAGS) -Wl,-soname,libnorand.so -o $@ $<

libnorand.o: norand.c
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

libsamerand.so: samerand.c
	$(CC) $(CFLAGS) -shared -fPIC -o $@ $< -ldl

main: main.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
		rm -f *.o *.so main
