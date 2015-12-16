/**
 * This class describes MyEntity behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "myentity.h"

MyEntity::MyEntity() : Entity()
{
	this->addSprite("assets/square.tga");
	this->sprite()->color = RED;
}

MyEntity::~MyEntity()
{

}

void MyEntity::update(float deltaTime)
{
<<<<<<< HEAD
	position += velocity;
	rotation = velocity.getAngle();



=======
>>>>>>> master
	// ###############################################################
	// Rotate
	// ###############################################################
	this->rotation += HALF_PI * deltaTime; // 90 deg/sec
	if (this->rotation > TWO_PI) {
		this->rotation -= TWO_PI;
	}
<<<<<<< HEAD
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
=======
}
>>>>>>> master
