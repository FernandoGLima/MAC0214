all: 	
		g++ -Wall -c -o B.o B.cpp
		g++ -Wall -o B B.cpp 


clean:
		rm -rf *.o