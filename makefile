run:	Calculator.o Shape.o main.o
	g++ Calculator.o Shape.o main.o -o run

main.o:	Calculator.h Shape.h main.cpp
	g++ -c main.cpp

Calculator.o:	Calculator.h Calculator.cpp
	g++ -c Calculator.cpp

Shape.o:	Shape.h Shape.cpp
	g++ -c Shape.cpp

clean:
	rm *.o
