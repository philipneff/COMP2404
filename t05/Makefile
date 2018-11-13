OPT = -Wall

t04:		main.o Book.o Library.o Array.o
	g++ $(OPT) -o t04 main.o Book.o Library.o Array.o

main.o:		main.cc Book.h Library.h Array.h
	g++ $(OPT) -c main.cc

Array.o:	Array.cc Array.h
	g++ $(OPT) -c Array.cc

Library.o:	Library.cc Library.h
	g++ $(OPT) -c Library.cc

Book.o:		Book.cc Book.h
	g++ $(OPT) -c Book.cc

clean:
	rm -f *.o T04
