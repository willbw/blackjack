#pragma once

#include <iostream>
#include <vector>
#include "Hand.h"

class Game;

class Person
{
  public:
    Person(std::string name, Game* game);
    int getValueOfHand() const;
    bool isBust() const;
    void showHand() const;
    void hit();
    void stand();
    friend std::ostream& operator << (std::ostream& os, const Person& p);
  protected:
    std::string name;
    Game* game;
    Hand hand;
    bool bust;
};
