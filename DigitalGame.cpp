#include "DigitalGame.h"

DigitalGame::DigitalGame()
{
}

DigitalGame::DigitalGame(const std::string name, double price, double tax): Game(name, price, tax)
{
  this->discount= 0.15;
}
double DigitalGame::getDiscount() const {
    return discount;
}
DigitalGame::~DigitalGame()
{
}

double DigitalGame::calculatePriceWithTax() {
   double p = Game::getPrice()  - (Game::getPrice() * getDiscount())
    return  p + (p * getTax());
}
std::string DigitalGame::replaceTheProduct() const
{
  std::string r="this product will have a replacement.";
    return r;
}

std::string DigitalGame::toString() const
{
	return std::string();
}
