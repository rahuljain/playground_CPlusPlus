all: pgm

pgm: computeDouble.o worker.o main.o
	g++ -o pgm computeDouble.o worker.o main.o

main.o: main.C worker.h
	g++ -Wall -c main.C

worker.o: worker.C worker.h computeDouble.h
	g++ -Wall -c worker.C

computeDouble.o: computeDouble.C computeDouble.h
	g++ -Wall -c computeDouble.C

clean:
	rm -f *.o
	rm -f pgm
