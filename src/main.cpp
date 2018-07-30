#include <iostream>
#include <vector>

#include "Card.h"
#include "Hand.h"
#include "Shoe.h"
#include "Person.h"
#include "Dealer.h"
#include "Player.h"
#include "Game.h"

using std::cin;
using std::cout;
using std::endl;

int DECKS_IN_SHOE = 6;

int main() {
  srand(time(NULL));
  Game game = Game();
  Shoe shoe = Shoe(DECKS_IN_SHOE);
  Player player = Player("Will", &game);
  Dealer dealer = Dealer(&game);
  game.setShoe(&shoe);
  game.setDealer(&dealer);
  game.setPlayer(&player);

  while (true)
  {
    std::string s;
    std::cin >> s;
    player.hit();
    cout << player << endl;
  }
}
