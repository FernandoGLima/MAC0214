all: 	
		g++ -Wall -c -o E.o E.cpp
		g++ -Wall -o E E.cpp 


clean:
		rm -rf *.o