#include "Game.h"

Game::Game()
{
}

Card Game::getCard()
{
  return shoe->deal();
}

void Game::setShoe(Shoe* shoe)
{
  this->shoe = shoe;
}

void Game::setDealer(Dealer* dealer)
{
  this->dealer = dealer;
}


void Game::setPlayer(Player* player)
{
  this->player = player;
}
