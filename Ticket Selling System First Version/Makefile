 output: MainInterface.o LoginInterface.o
	g++ -std=c++0x -Wall MainInterface.o LoginInterface.o -o output

 MainInterface.o: MainInterface.cpp
	g++ -c MainInterface.cpp

 LoginInterface.o: LoginInterface.cpp LoginInterface.h
	g++ -c LoginInterface.cpp

 clean:
	rm *.o output