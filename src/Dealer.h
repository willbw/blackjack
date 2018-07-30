#pragma once

#include <iostream>
#include <vector>
#include "Card.h"
#include "Person.h"
#include "Shoe.h"

class Game;

class Dealer : Person
{
  public:
    Dealer(Game* game);
};
