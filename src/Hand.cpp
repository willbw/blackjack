#include <vector>
#include <iostream>
#include "Hand.h"
#include "Card.h"

Hand::Hand()
{
  cards = std::vector<Card>();
}

void Hand::addCard(Card card)
{
  cards.push_back(card);
}

int Hand::getValue() const
{
  int value = 0;
  bool hasAce = false;
  for (Card card : cards) {
    value += card.getValue();
    if (card.getSuit() == Card::Ace) hasAce = true;
  }
  return value <= 11 && hasAce ?  value + 10 : value;
}

void Hand::clear()
{
  cards.clear();
}

bool Hand::hasUnflippedCards() const
{
  for (Card card : cards) {
    if (!card.isFaceUp()) return true;
  }
  return false;
}

void Hand::revealCards()
{
  for (Card card : cards) {
    if (!card.isFaceUp()) card.flip();
  }
  return;
}

std::ostream& operator<<(std::ostream& os, const Hand& hand)
{
  for (Card card : hand.cards) {
    os << card << " ";
  }
  return os;
}
