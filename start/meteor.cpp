#include "meteor.h"


Meteor::Meteor()
{
	this->addSprite("assets/meteor.tga");
	this->rotation = velocity.getAngle();

	velocity_x = cos(rand() % 8 + 1) * 4;
	velocity_y = sin(rand() % 8 + 1) * 2;

	velocity = Vector2(velocity_x, velocity_y);


}

Meteor::~Meteor()
{

}

void Meteor::particles()
{

}

void Meteor::update(float deltaTime)	
{
	this->position += velocity;
	this->rotation += 0.01;
}
