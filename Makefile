OdeSolver.o : OdeSolver.cpp OdeSolver.hpp 
	g++ -c -O OdeSolver.cpp

prog.o :	prog.cpp OdeSolver.cpp
	g++ -c -O prog.cpp

prog : OdeSolver.o prog.o
	g++ -O -o prog OdeSolver.o prog.o
