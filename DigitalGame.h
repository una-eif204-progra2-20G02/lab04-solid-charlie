#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include "Game.h"

//using namespace std;

class DigitalGame : public Game {
  private:
  double discount;
public:
	DigitalGame();
	DigitalGame(const std::string name, double price, double tax);
	virtual ~DigitalGame();
  double getDiscount() const;
  double calculatePriceWithTax() override;
  std::string replaceTheProduct() const;

	std::string toString() const;

};


#endif //LAB04_SOLID_GAME_H