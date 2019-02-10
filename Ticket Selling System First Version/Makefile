 output: MainInterface.o LoginInterface.o User.o DailyTransactionData.o
	g++ -std=c++14 -Wall MainInterface.o LoginInterface.o User.o DailyTransactionData.o -o output

 MainInterface.o: MainInterface.cpp
	g++ -c MainInterface.cpp -std=c++14

 LoginInterface.o: LoginInterface.cpp LoginInterface.h
	g++ -c LoginInterface.cpp -std=c++14

 User.o: User.cpp User.h
	g++ -c User.cpp -std=c++14

 DailyTransactionData.o: DailyTransactionData.cpp DailyTransactionData.h
	g++ -c DailyTransactionData.cpp -std=c++14

 clean:
	rm *.o output
