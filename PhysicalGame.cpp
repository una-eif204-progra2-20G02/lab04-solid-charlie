#include "physicalGame.h"

PhysicalGame::PhysicalGame()
{
}


PhysicalGame::PhysicalGame(const std::string& name, double price, double itemWeight, const std::string& productDimensions) : Game(name, price)
{
    this->itemWeight = itemWeight;
    this->productDimensions = productDimensions;
}

std::string PhysicalGame::shipTheProduct() const
{
  std::string r="this product will have a shipment.";
    return r;
}

std::string PhysicalGame::toString()
{
    std::stringstream s;
  
    s << itemWeight;
    s << productDimensions;
    return s.str();
}