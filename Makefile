all: 	
		g++ -Wall -c -o C.o C.cpp
		g++ -Wall -o C C.cpp 


clean:
		rm -rf *.o