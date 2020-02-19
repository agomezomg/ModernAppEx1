run:	Calculator.o main.o
	g++ Calculator.o main.o -o run

main.o:	Calculator.h main.cpp
	g++ -c main.cpp

Calculator.o:	Calculator.h Calculator.cpp
	g++ -c Calculator.cpp

clean:
	rm *.o
