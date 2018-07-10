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
  cout << card1 << endl;
  cout << card1.getValue() << endl;
  /* Hand h; */
  /* h.addCard(card1); */
  /* h.print(); */
  /* Deck d = Deck(); */
  /* d.populate(); */
  /* d.print(); */
}
