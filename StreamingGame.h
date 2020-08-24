#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
#include "Game.h"

class StreamingGame :public Game {
public:
	StreamingGame();
	StreamingGame(const std::string& name, double price, double tax);
	virtual~StreamingGame();

	std::string toString() const;
};


#endif //LAB04_SOLID_GAME_H