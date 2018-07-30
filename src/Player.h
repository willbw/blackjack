#pragma once

#include <iostream>
#include <vector>
#include "Person.h"

class Game;

class Player : public Person
{
  public:
    Player(std::string name, Game* game);
    /* void placeBet(int betAmount); */
    /* void hit(); */
    /* void stand(); */
  /* private: */
    /* int money; */
    /* int currentBet; */
};
