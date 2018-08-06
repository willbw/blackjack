#include <vector>
#include "Dealer.h"
#include "Card.h"

Dealer::Dealer(Game* game) : Person("Dealer", game) { }

bool Dealer::hasUnflippedCards() const
{
  return hand.hasUnflippedCards();
}

void Dealer::revealCards()
{
  for (int i=0; i < hand.cards.size(); i++) {
    if (!hand.cards[i].isFaceUp()) {
      hand.cards[i].flip();
    }
  }
}
