CC = g++
CXXFLAGS = -g -Wall

Electra: main.o
	$(CC) $(CXXFLAGS) -o Electra main.o

main.o : main.cpp celltype.h
	$(CC) $(CXXFLAGS) -c main.cpp

clean:
	rm Electra *.o
