#include <vector>
#include <iostream>
#include "Card.h"

#pragma once

class Shoe
{
  public:
    Shoe(int numDecks);
    friend std::ostream& operator << (std::ostream& os, const Shoe& s);
    Card deal();
    void shuffle();
  private:
    std::vector<Card> cards;
    int numberOfDecks;
    void populate(int numDecks);
};
