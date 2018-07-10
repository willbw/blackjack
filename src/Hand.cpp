#include <vector>
#include <iostream>
#include "Hand.h"
#include "Card.h"

Hand::Hand()
{
  cards = std::vector<Card>();
}
void Hand::print()
{
  for (int i = 0; i < cards.size(); i++) {
    std::cout << "Card " << i+1 << ": ";
    cards[i].print();
  }
}
void Hand::addCard(Card card)
{
  cards.push_back(card);
}
int Hand::getValue()
{
  int value = 0;
  bool hasAce = false;
  for (Card card : cards) {
    value += card.getValue();
    if (card.getSuit() == Card::Ace) hasAce = true;
  }
  return value <= 11 && hasAce ?  value + 10 : value;
}
