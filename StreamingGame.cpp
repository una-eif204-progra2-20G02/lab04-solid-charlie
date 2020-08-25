#include "StreamingGame.h"

StreamingGame::StreamingGame()
{
}

StreamingGame::StreamingGame(const std::string& name, double price, double tax)
{
}

const std::string &StreamingGame::getCategory()const{
  return category;
}

StreamingGame::~StreamingGame(){}

std::string StreamingGame::toString() const
{
  std::stringstream s;
  s<< Game::toString();
  s<<"Category"<<getCategory()<<endl;
	return std::s.str();
}
