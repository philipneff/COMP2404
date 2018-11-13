OPT = -Wall

t02:	main.o Book.o Library.o
	g++ $(OPT) -o t01 main.o Book.o Library.o

main.o:	main.cc Book.h
	g++ $(OPT) -c main.cc

Library.o: Library.cc Library.h Book.h
	g++ $(OPT) -c Library.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

clean:
	rm -f *.o t02 t01
