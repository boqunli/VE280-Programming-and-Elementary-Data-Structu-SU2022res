all: main

main: point.o line.o main.o
	g++ -o main point.o line.o main.o

point.o: point.cpp
	g++ -c point.cpp

line.o: line.cpp 
	g++ -c line.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f main *.o