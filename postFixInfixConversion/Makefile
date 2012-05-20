postFixInfixConversion: stk.o postFixInfixConversion.o
	g++ -o postFixInfixConversion stk.o postFixInfixConversion.o

stk.o: stk.cpp stk.h
	g++ -c -g stk.cpp

postFixInfixConversion.o: postFixInfixConversion.cpp stk.h
	g++ -c -g postFixInfixConversion.cpp

clean:
	rm -rf *.o postFixInfixConversion
