#ifndef BULLET_H
#define BULLET_H

#include "rt2d/entity.h"

class Bullet : public Entity
{
public:
	//@brief Constructor
	Bullet();
	
	//@brief Destructor
	virtual ~Bullet();

	void shootBullet(Entity * entity);

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	//@brief Private declarations
	int velocity_x;
	int velocity_y;
	Vector2 velocity;

};


#endif // !BULLET_H
