all: game.o main

game.o:
	gcc -c src/game.cpp -o game.o -std=c++11

main:
	gcc game.o src/main.cpp -o painful -std=c++11

clean:
	rm *.o
