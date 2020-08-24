#include "PhysicalGame.h"

PhysicalGame::PhysicalGame()
{
}

PhysicalGame::PhysicalGame(const std::string name, double price, double tax)
{
}

PhysicalGame::PhysicalGame(const std::string& name, double price, double itemWeight, const std::string& productDimensions)
{
}

PhysicalGame::~PhysicalGame()
{
}


double Game::getItemWeight() const {
    return itemWeight;
}

void Game::setItemWeight(double itemWeight) {
    Game::itemWeight = itemWeight;
}

const std::string& Game::getProductDimensions() const {
    return productDimensions;
}

void Game::setProductDimensions(const std::string& productDimensions) {
    Game::productDimensions = productDimensions;
}


std::string Game::toString() {
    std::ostringstream output;
    std::string s = Person::toString();
    output << std::fixed << std::setprecision(2);
    output << s
        << "\nItem Weight: " << getItemWeight()
        << "\nProduct Dimensions: " << getProductDimensions()
    //    << "\nPrice: $" << getPrice()
    //    << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}