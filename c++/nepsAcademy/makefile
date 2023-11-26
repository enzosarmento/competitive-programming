output: template.o main.o
	g++ -o funcaoPrimo template.o main.o

template.o: template.h
	g++ -c template.h

main.o: funcaoPrimo.cpp
	g++ -c funcaoPrimo.cpp

clean:
	rm *.o funcaoPrimo

run:
	./funcaoPrimo