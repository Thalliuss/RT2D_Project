#include "bullet.h"


Bullet::Bullet()
{
	this->addSprite("assets/bullet.tga");
}


Bullet::~Bullet()
{

}

void Bullet::shootBullet(Entity * entity)
{
	this->position = entity->position;
	this->rotation = entity->rotation;

	velocity_x = cos(this->rotation) * 5;
	velocity_y = sin(this->rotation) * 5;
	velocity = Vector2(velocity_x, velocity_y);
}

void Bullet::update(float deltaTime)
{
	this->position += velocity;
}
