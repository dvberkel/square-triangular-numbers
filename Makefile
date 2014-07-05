CC=g++
CFLAGS=-std=c++11

all:
	$(CC) $(CFLAGS) -o bin/stn src/stn.cpp

clean:
	rm bin/stn
