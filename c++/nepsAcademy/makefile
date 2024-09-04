CXXFLAGS = -c -g -O0 -std=c++11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow

all: main

main: program.o
	g++ program.o -o main

program.o: funcaoPrimo.cpp template.h
	g++ $(CXXFLAGS) funcaoPrimo.cpp -o program.o

clean:
	rm *.o main

run:
	./main
