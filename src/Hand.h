#pragma once

#include <vector>
#include "Card.h"


class Hand {
  public:
    Hand();
    void addCard(Card card);
    int getValue() const;
    friend std::ostream& operator<<(std::ostream& os, const Hand& hand);
    std::vector<Card> cards;
};
