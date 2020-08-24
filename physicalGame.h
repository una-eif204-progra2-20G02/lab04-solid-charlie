#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include "Game.h"

class PhysicalGame  : Game {
public:
    PhysicalGame();

    PhysicalGame(const std::string& name, double price, double tax);

    PhysicalGame(const std::string& name, double price, double itemWeight, const std::string& productDimensions);


    const std::string shipTheProduct() const;

    std::string toString() override;
private:
    std::string name;
    double price;
    double tax;
    double itemWeight;
    std::string productDimensions;
};

#endif //LAB04_SOLID_GAME_H
};


#endif //LAB04_SOLID_GAME_H
