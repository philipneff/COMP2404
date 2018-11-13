OPT = -Wall

t06:		main.o Book.o Library.o List.o Array.o
	g++ $(OPT) -o t06 main.o Book.o Library.o List.o Array.o

main.o:		main.cc Book.h Library.h Array.h
	g++ $(OPT) -c main.cc

Array.o:	Array.cc Array.h
	g++ $(OPT) -c Array.cc

Library.o:	Library.cc Library.h
	g++ $(OPT) -c Library.cc

List.o:     List.cc List.h
	g++ $(OPT) -c List.cc

Book.o:		Book.cc Book.h
	g++ $(OPT) -c Book.cc

clean:
	rm -f *.o t06
