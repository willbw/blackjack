#include <iostream>
#include <vector>
#include <algorithm>
#include "Card.h"
#include "Hand.h"
#include "Deck.h"

using std::cout;
using std::endl;

class Player {};
class Dealer {};
class Game {};
class Shoe {}; // Shoe is 'many decks of cards' - usually 6

int main() {
  Card card1 = Card(Card::Jack, Card::Spades, true);
  Card card2 = Card(Card::Ten, Card::Hearts, true);
  cout << card1 << endl;
  cout << card2 << endl;
  Hand h;
  h.addCard(card1);
  h.addCard(card2);
  cout << h << endl;
  cout << "Flipping the second card" << endl;
  h.cards[1].flip();
  cout << h << endl;
}
