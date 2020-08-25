#include "PhysicalGame.h"

PhysicalGame::PhysicalGame()
{
}

PhysicalGame::PhysicalGame(const std::string& name, double price, double itemWeight, const std::string& productDimensions) : Game(name, price)
{
    this->itemWeight = itemWeight;
    this->productDimensions = productDimensions;
}
double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

const std::string &PhysicalGame::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGame::setProductDimensions(const std::string &productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
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