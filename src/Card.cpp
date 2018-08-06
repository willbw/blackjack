#include <iostream>
#include <algorithm>
#include "Card.h"

Card::Card(Value v, Suit s, bool f)
{
  value = v;
  suit = s;
  faceUp = f;
}
int Card::getValue() const
{
  if (faceUp) {
    // Cards higher than 10 are valued at 10
    return value > 10 ? 10 : value;
  }
  return 0;
}
int Card::getSuit() const
{
  return suit;
}
void Card::print() const
{
  std::cout << "Suit: " << suit << ", value: " << value << std::endl;
}

bool Card::isFaceUp() const
{
  return faceUp;
}

void Card::flip()
{
  faceUp = !faceUp;
}

std::ostream& operator << (std::ostream& os, const Card& card)
{
  std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
                           "10", "J", "Q", "K"};

  std::string SUITS[] = {"s", "h", "d", "c"};

  if (card.faceUp) {
    os << RANKS[card.value] << SUITS[card.suit];
  } else {
    os << "XX";
  }

  return os;
}
