#include "bullet.h"


Bullet::Bullet()
{
	this->addSprite("assets/boid.tga");
}


Bullet::~Bullet()
{

}

void Bullet::update(float deltaTime)
{
	position += velocity;
	rotation = velocity.getAngle();
}
