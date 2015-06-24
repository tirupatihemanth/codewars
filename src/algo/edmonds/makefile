CC=g++
CFLAGS = -Wall -c

all: edmonds

edmonds: edmonds.o vertex.o unionFind.o
	$(CC) $^ -o $@

edmonds.o: edmonds.cpp
	$(CC) $(CFLAGS) $^ 

vertex.o: vertex.cpp vertex.h
	$(CC) $(CFLAGS) $^

unionFind.o: unionFind.cpp unionFind.h
	$(CC) $(CFLAGS) $^


.PHONY: clean

clean:
	rm -rf *.o edmonds
