all : problem1.o problem2.o problem3.o
	g++ problem1.o main_problem1.cpp -o mainp1
	g++ problem2.o main_problem2.cpp -o mainp2
	g++ problem3.o main_problem3.cpp -o mainp3

problem1.o : problem1.h problem1.cpp
	g++ -c problem1.cpp

problem2.o : problem2.h problem2.cpp
	g++ -c problem2.cpp

problem3.o : problem3.h problem3.cpp
	g++ -c problem3.cpp

clean:
	rm -f *.o mainp1 mainp2 mainp3
