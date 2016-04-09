all:Clock.cpp Clock.h main.cpp
	g++ -c Clock.cpp
	g++ -c main.cpp
	g++ -o main Clock.o main.o

