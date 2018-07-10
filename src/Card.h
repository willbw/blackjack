#include <iostream>
#pragma once

class Card
{
  public:
    enum Suit {Spades, Hearts, Diamonds, Clubs};
    enum Value {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, 
          Jack, Queen, King};
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

    Card(Value v, Suit s, bool f);
    int getValue();
    int getSuit();
    void print();
    void flip();
  private:
    Suit suit;
    Value value;
    bool faceUp;
};
