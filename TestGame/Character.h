#ifndef CHARACTER_H
#define CHARACTER_H


#include <QWidget>
#include <QPainter>
#include "Player.h"
class Character : public Player
{
public:
	Character();
	void setPosition(int x, int y);
	void update(Character *character);
private:
};

#endif // CHARACTER_H
