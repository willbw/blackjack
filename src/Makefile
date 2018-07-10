CXX = clang++
CXXFLGS = -Wall -g -std=c++11

main: main.o Card.o Hand.o Deck.o
	$(CXX) $(CXXFLAGS) -o main main.o Card.o Hand.o Deck.o

main.o: main.cpp Card.h Hand.h Deck.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Card.o: Card.h

Hand.o: Hand.h

Deck.o: Deck.h
