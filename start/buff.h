#ifndef BUFF_H
#define BUFF_H

#include <rt2d/entity.h>

class Buff : public Entity
{
public:
	Buff();
	virtual ~Buff();

	virtual void update(float deltaTime);
};


#endif // !BUFF_H
