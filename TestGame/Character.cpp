#include "character.h"

bool ye = true;
int i = 0;

Character::Character() :Player(QPixmap("Resources/background/background.png"), QRect(0, 0, 2400, 600))
{
}

void Character::setPosition(int x, int y)
{
	position = QRect(x, y, position.width(), position.height());
}
void Character::update(Character *character)
{
	

	if (ye)
	{
		for (i; i < 30; i++)
		{
			setPosition(i, 0);
		}
		ye = false;
	}
	else
	{
		for (i; i > 0; i--)
		{
			setPosition(i, 0);
		}
		ye = true;
	}

	
}