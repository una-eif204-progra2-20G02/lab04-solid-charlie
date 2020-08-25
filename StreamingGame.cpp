#include "StreamingGame.h"

StreamingGame::StreamingGame()
{
}

StreamingGame::StreamingGame(const std::string& name, double price, double tax): Game(name, price, tax)
{
}

const std::string &StreamingGame::getCategory()const{
  return category;
}

std::string StreamingGame::replaceTheProduct() const
{
  std::string r="this product will have a replacement.";
    return r;
}

StreamingGame::~StreamingGame(){}

std::string StreamingGame::toString() const
{
  std::stringstream s;
  s<< Game::toString();
  s<<"Category"<<getCategory()<<endl;
	return std::s.str();
}
