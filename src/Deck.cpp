#include <iostream>
#include <vector>
#include "Deck.h"
#include "Card.h"

Deck::Deck()
{
}
void Deck::populate()
{
  for (int suit = Card::Spades; suit <= Card::Clubs; suit++) {
    for(int value = Card::Ace; value <= Card::King; value++) {
      cards.push_back(Card(
            static_cast<Card::Value>(value),
            static_cast<Card::Suit>(suit),
            true
            ));
    }
  }
}
void Deck::print()
{
  std::cout << "Number of cards: " << cards.size() << std::endl;
}
