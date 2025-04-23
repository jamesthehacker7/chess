program.exe: program.o Board.o
	g++ -o program.exe program.o Board.o

Board.o: Board.cpp Board.hh
	g++ -c Board.cpp

program.o: program.cpp Board.hh
	g++ -c program.cpp

clean:
	rm -f *.o
	rm -f *.exe