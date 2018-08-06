CXX = clang++
CXXFLAGS = -Wall -std=c++11 -g

main: main.o Card.o Hand.o Shoe.o Person.o Player.o Dealer.o Game.o
	$(CXX) $(CXXFLAGS) -o main main.o Card.o Hand.o Shoe.o Person.o Player.o Dealer.o Game.o

main.o: main.cpp Card.h Hand.h Shoe.h Person.h Player.h Dealer.h Game.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Card.o: Card.h

Hand.o: Hand.h

Shoe.o: Shoe.h

Person.o: Person.h

Player.o: Player.h Person.h
	$(CXX) $(CXXFLAGS) -c Player.cpp

Dealer.o: Dealer.h Person.h
	$(CXX) $(CXXFLAGS) -c Dealer.cpp

Game.o: Game.h
