#ifndef BULLET_H
#define BULLET_H

#include "rt2d/entity.h"

class Bullet : public Entity
{
public:
	Polar polar = Polar((rand() % 360) * DEG_TO_RAD, 400.0f);

	//@brief Constructor
	Bullet();
	
	//@brief Destructor
	virtual ~Bullet();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	//@brief Private declarations
};


#endif // !BULLET_H
