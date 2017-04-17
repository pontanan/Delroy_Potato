#include "ground.h"


Ground::Ground() :Player(QPixmap("Resources/ground/dirt.png"), QRect(0, 500, 400, 100))
{
}


void Ground::setPosition(int x, int y)
{
	position = QRect(x, y, position.width(), position.height());
}
void Ground::update(Ground *ground)
{
}