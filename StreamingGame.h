#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include "Game.h"

class StreamingGame :public Game {
  private:
  string category;
public:
	StreamingGame();
	StreamingGame(const std::string& name, double price, double tax);
	virtual~StreamingGame();
  const string &getCategory() const;
  std::string replaceTheProduct() const;  
	std::string toString() const;
};


#endif //LAB04_SOLID_GAME_H