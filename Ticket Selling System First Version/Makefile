 output: MainInterface.o LoginInterface.o User.o DailyTransactionData.o
	g++ -std=c++0x -Wall MainInterface.o LoginInterface.o User.o DailyTransactionData.o -o output

 MainInterface.o: MainInterface.cpp
	g++ -c MainInterface.cpp

 LoginInterface.o: LoginInterface.cpp LoginInterface.h
	g++ -c LoginInterface.cpp
	
 User.o: User.cpp User.h
	g++ -c User.cpp

 DailyTransactionData.o: DailyTransactionData.cpp DailyTransactionData.h
	g++ -c DailyTransactionData.cpp

 clean:
	rm *.o output