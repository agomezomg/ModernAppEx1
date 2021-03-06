run:	Calculator.o Shape.o CASBuilder.o FairySimBuilder.o VampireSimBuilder.o Client.o BasicSimBuilder.o Sim.o Director.o Data.o main.o
	g++ Calculator.o Shape.o CASBuilder.o FairySimBuilder.o VampireSimBuilder.o Client.o BasicSimBuilder.o Sim.o Director.o Data.o main.o -o run

main.o:	Calculator.h Shape.h Director.h Data.h Client.h main.cpp
	g++ -c main.cpp

Calculator.o:	Calculator.h Calculator.cpp
	g++ -c Calculator.cpp

Shape.o:	Shape.h Shape.cpp
	g++ -c Shape.cpp

Director.o:	CASBuilder.h FairySimBuilder.h VampireSimBuilder.h BasicSimBuilder.h Sim.h Director.h Director.cpp
	g++ -c Director.cpp

FairySimBuilder.o: CASBuilder.h FairySimBuilder.h FairySimBuilder.cpp
	g++ -c FairySimBuilder.cpp

VampireSimBuilder.o: CASBuilder.h VampireSimBuilder.h VampireSimBuilder.cpp
	g++ -c VampireSimBuilder.cpp

BasicSimBuilder.o: CASBuilder.h BasicSimBuilder.h BasicSimBuilder.cpp
	g++ -c BasicSimBuilder.cpp

CASBuilder.o:	CASBuilder.h  CASBuilder.cpp Sim.h
	g++ -c CASBuilder.cpp

Sim.o:	Sim.h Sim.cpp
	g++ -c Sim.cpp

Client.o:	Client.h Data.h Observer.h
	g++ -c Client.cpp

Data.o:	Data.h Data.cpp Subject.h Observer.h
	g++ -c Data.cpp

clean:
	rm *.o
