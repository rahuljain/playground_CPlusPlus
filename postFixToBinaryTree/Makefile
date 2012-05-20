main: node.o main.o
	g++ -o main node.o main.o

node.o: node.cpp node.h
	g++ -c -g node.cpp

main.o: main.cpp node.h
	g++ -c -g main.cpp

clean:
	rm -rf *.o main
