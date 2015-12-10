/**
 * This class describes MyEntity behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "myentity.h"


MyEntity::MyEntity() : Entity()
{
	// start the timer.
	t.start();

	this->addSprite("assets/spaceship.tga");
	//this->sprite()->color = RED;
}

MyEntity::~MyEntity()
{

}

void MyEntity::update(float deltaTime)
{
	position += velocity;
	rotation = velocity.getAngle();



	// ###############################################################
	// myentity's max and min velocity
	// ###############################################################
	if (velocity.x >= maxvelocity)
	{
		velocity.x = 3;
	}
	if (velocity.x <= minvelocity)
	{
		velocity.x = -3;
	}
	if (velocity.y >= maxvelocity)
	{
		velocity.y = 3;
	}
	if (velocity.y <= minvelocity)
	{
		velocity.y = -3;
	}


	/*if (t.seconds() > 0.0333f) {
		RGBAColor color = this->sprite()->color;
		this->sprite()->color = Color::rotate(color, 0.01f);
		t.start();
	}*/
}


/*if (mousey >= unit->position.y + -32 && mousey <= unit->position.y + 32 && mousex >= unit->position.x + -32 && mousex <= unit->position.x + 32) {
	text[15]->message();
}*/
