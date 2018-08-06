#pragma once

#include "Dealer.h"
#include "Card.h"
#include "Player.h"
#include "Shoe.h"

// 'Mediator' style class
class Game
{
  public:
    Game();
    Card getCard(bool flip);
    void setShoe(Shoe* shoe);
    void setDealer(Dealer* dealer);
    void setPlayer(Player* player);
  private:
    Shoe* shoe;
    Dealer* dealer;
    Player* player;
};
