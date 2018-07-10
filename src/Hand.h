#include <vector>
#include "Card.h"

class Hand {
  public:
    Hand();
    void print();
    void addCard(Card card);
    int getValue();
  private:
    std::vector<Card> cards;
};
