#ifndef GROUND_H
#define GROUND_H

#include <QWidget>
#include <QPainter>
#include "Player.h"

class Ground : public Player
{
public:
	Ground();
	void setPosition(int x, int y);
	void update(Ground *ground);
private:
};

#endif // GROUND_H
