#pragma once

#include "Dealer.h"
#include "Card.h"
#include "Player.h"
#include "Shoe.h"

class Game
{
  public:
    Game();
    Card getCard();
    void setShoe(Shoe* shoe);
    void setDealer(Dealer* dealer);
    void setPlayer(Player* player);
  private:
    Shoe* shoe;
    Dealer* dealer;
    Player* player;
};
