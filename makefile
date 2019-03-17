run: matrix
	./matrix
	
matrix: test.o matrix.o
	g++ -o matrix test.o matrix.o

test.o: test.cpp
	g++ -c -o test.o test.cpp

matrix.o: matrix.cpp matrix.hpp
	g++ -c -o matrix.o matrix.cpp

cp: 
	cp matrix.cpp ../../src/matrix.cpp
	cp matrix.hpp ../../include/matrix.hpp

clean:
	rm -f matrix *.o
