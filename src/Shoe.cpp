#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "Shoe.h"
#include "Card.h"

Shoe::Shoe(int numDecks)
{
  numberOfDecks = numDecks;
  Shoe::populate(numberOfDecks);
  Shoe::shuffle();
}

// Fills the shoe with numDecks worth of decks
void Shoe::populate(int numDecks)
{
  for (int i = 0; i < numDecks; i++) {
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
}

void Shoe::shuffle() {
  std::random_device rd;
  std::mt19937 g(rd());
  // Shuffle all of the cards in the shoe
  std::shuffle(cards.begin(), cards.end(), g);
}

Card Shoe::deal() {
  int index = cards.size() - 1;
  Card card = cards[index];
  cards.pop_back();
  return card;
}

std::ostream& operator << (std::ostream& os, const Shoe& s) {
  std::vector<Card>::const_iterator it = s.cards.begin();
  while (it != s.cards.end()) {
    for (int i = 0; i < 13; i++) {
      if (it == s.cards.end())
        break;
      os << *it << " ";
      it++;
    }
    os << std::endl;
  }
  return os;
}
