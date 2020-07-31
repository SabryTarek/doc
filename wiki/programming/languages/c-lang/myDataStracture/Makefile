# declare variables
CC = g++
CFLAGS = -c -Wall -std=c++17
# -c -> complie
# -g -> debug
# -wall -> warning
# -std=c++17 -> c++ verstion

output: main.o LikedList.o
	$(CC) main.o LikedList.o -o output


main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	$(CC) $(CFLAGS) LinkedList.cpp


clean:
	rm *.o output







######################################################################

### Example2 ###

# specify the compiler
CC=gcc

# specify options for the compiler
CFLAGS=-c -Wall

all: hello

hello: main.o hello.o
    $(CC) main.o hello.o -o hello

main.o: main.cpp
    $(CC) $(CFLAGS) main.cpp

hello.o: hello.cpp
    $(CC) $(CFLAGS) hello.cpp

clean:
    rm -rf *o hello



##### http://mrbook.org/blog/tutorials/make/ #####