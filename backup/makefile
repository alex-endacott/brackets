brackets: brackets.o charStack.o
	g++ brackets.o charStack.o -std=c++11 -o bin/brackets && rm -rf *.o

brackets.o: brackets.cpp include/charStack.h
	g++ -c brackets.cpp -std=c++11

charStack.o: include/charStack.h src/charStack.cpp
	g++ -c src/charStack.cpp -std=c++11