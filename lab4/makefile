all : problem1.o problem2.o 
	g++ problem1.o problem1-main.cpp -o mainp1
	g++ -w problem2.o problem2-main.cpp -o mainp2

problem1.o : problem1.h problem1.cpp
	g++ -c problem1.cpp

problem2.o : problem2.h problem2.cpp
	g++ -c -w problem2.cpp

clean:
	rm -f *.o mainp1 mainp2 
