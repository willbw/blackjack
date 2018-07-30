#pragma once
#include <vector>
#include "Card.h"

class Deck
{
  public:
    Deck();
    void populate();
    void print();
  private:
    std::vector<Card> cards;
};
