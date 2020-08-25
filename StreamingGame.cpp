#include "StreamingGame.h"

StreamingGame::StreamingGame()
{
}

StreamingGame::StreamingGame(const std::string& name, double price, double tax)
{
}

const string &StreamingGame::getCategory()const{
  return category;
}

StreamingGame::~StreamingGame(){}

std::string StreamingGame::toString() const
{
  std::stringstream s;
  Game::toString();
  s<<"Category"<<getCategory()<<endl;
	return std::s.str();
}
