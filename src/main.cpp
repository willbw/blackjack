#include <iostream>
#include <vector>
#include <map>

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
using std::string;

int DECKS_IN_SHOE = 6;

enum Inputs {h, s, v};
std::map<string, Inputs> inputMap = {
  {"h", h},
  {"s", s},
  {"v", v}
};

int main()
{
  srand(time(NULL));
  Game game = Game();
  Shoe shoe = Shoe(DECKS_IN_SHOE);
  Player player = Player("Will", &game);
  Dealer dealer = Dealer(&game);
  game.setShoe(&shoe);
  game.setDealer(&dealer);
  game.setPlayer(&player);
  
  string inputChoice;
  while (true)
  {
    player.getCard();
    dealer.getCard();
    player.getCard();
    dealer.getCard(true);
    while (!player.isBust() && !dealer.isBust()) {
      cout << dealer << endl;
      cout << player << endl;
      while (true)
      {
        cout << "Choose option: [h]it, [s]tand, [v]iew scores" << endl;
        std::getline(cin, inputChoice);
        if (inputMap[inputChoice] != h) break;
        player.getCard();
        cout << player << endl;
      }
      if (!player.isBust())
      {
        while (
            dealer.getValueOfHand() < 17 ||
            dealer.getValueOfHand() < player.getValueOfHand())
        {
          if (dealer.hasUnflippedCards()) {
            dealer.revealCards();
          } else {
            dealer.getCard();
          }
          cout << dealer << endl;
          cout << player << endl;
        }
      }

      if (dealer.isBust() || player.getValueOfHand() >= dealer.getValueOfHand()) {
        cout << "Player wins!" << endl;
      } else {
        cout << "Dealer wins!" << endl;
      }
      break;
    }
    cout << "Game over! Hit enter to play again" << endl;
    std::getline(cin, inputChoice);
    dealer.clearHand();
    player.clearHand();
  }
}
