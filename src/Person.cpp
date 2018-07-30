#include <iostream>
#include "Person.h"
#include "Game.h"

Person::Person(std::string name, Game* game)
{
  this->name = name;
  this->bust = false;
  this->game = game;
}

int Person::getValueOfHand() const
{
  return hand.getValue();
}

bool Person::isBust() const
{
  return bust;
}

void Person::showHand() const 
{
  std::cout << hand << std::endl;
}

void Person::hit()
{
  if (bust) {
    std::cout << "Sorry, " << name << ", you're bust. No more cards for you." << std::endl;
    return;
  }
  hand.addCard(game->getCard());
  if (getValueOfHand() > 21) {
    bust = true;
    std::cout << name << " is bust!" << std::endl;
  }
  return;
}

void Person::stand()
{
  return;
}

std::ostream& operator << (std::ostream& os, const Person& p)
{
  os << "=== " << p.name << " ===" << std::endl;
  os << p.hand;
  return os;
}
