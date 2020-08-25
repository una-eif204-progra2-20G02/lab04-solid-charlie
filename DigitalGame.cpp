#include "DigitalGame.h"

DigitalGame::DigitalGame()
{
}

DigitalGame::DigitalGame(const std::string name, double price, double tax)
{
  this->tax=tax;
}

DigitalGame::~DigitalGame()
{
}

std::string DigitalGame::toString() const
{
	return std::string();
}
