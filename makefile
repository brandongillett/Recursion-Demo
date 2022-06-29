CC = g++
FLAGS = -std=c++14 -Wall -c -g

recursion: recursion.o reverse.o
	$(CC) -g recursion.o reverse.o -o recursion

recursion.o: recursion.cpp recursion.h
	$(CC) $(FLAGS) recursion.cpp
reverse.o: reverse.cpp reverse.h
	$(CC) $(FLAGS) reverse.cpp

clean:
	rm *.o recursion
