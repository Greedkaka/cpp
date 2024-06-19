CC = g++
CFLAGS = -g -Wall -Werror -std=c++11

all: first

first.o: scenarios/first.cpp
	$(CC) $(CFLAGS) -c scenarios/first.cpp

second.o: scenarios/second.cpp
	$(CC) $(CFLAGS) -c scenarios/second.cpp

link.o: link.cpp link.h
	$(CC) $(CFLAGS) -c link.cpp
	
node.o: node.cpp node.h
	$(CC) $(CFLAGS) -c node.cpp

first: first.o link.o node.o
	$(CC) $(CFLAGS) -o first first.o link.o

second: second.o link.o node.o
	$(CC) $(CFLAGS) -o second second.o link.o

clean:
	rm -f *.o first second