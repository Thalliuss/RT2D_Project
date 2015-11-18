/**
 * This class describes MyScene behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include <fstream>
#include <sstream>

#include "myscene.h"

MyScene::~MyScene()
{
	// deconstruct and delete the Tree
	this->removeChild(myentity);


	// delete myentity from the heap (there was a 'new' in the constructor)
	delete myentity;
}

void MyScene::update(float deltaTime)
{
	// ###############################################################
	// Escape key stops the Scene
	// ###############################################################
	if (input()->getKeyUp( GLFW_KEY_ESCAPE )) {
		this->stop();
	}

	// ###############################################################
	// Spacebar scales myentity
	// ###############################################################
	if (input()->getKeyDown( GLFW_KEY_SPACE )) {
		myentity->scale = Point(1.1f, 1.1f);
	}
	if (input()->getKeyUp( GLFW_KEY_SPACE )) {
		myentity->scale = Point(1.0f, 1.0f);
	}

	// ###############################################################
	// Move myentity
	// ###############################################################
	myentity->position += velocity;
	myentity->rotation = velocity.getAngle();

	if (input()->getKey(GLFW_KEY_W)) {
		velocity.y -= 0.01;
	}
	if (input()->getKey(GLFW_KEY_S)) {
		velocity.y += 0.01;
	}
	if (input()->getKey(GLFW_KEY_A)) {
		velocity.x -= 0.01;
	}
	if (input()->getKey(GLFW_KEY_D)) {
		velocity.x += 0.01;
	}
	// ###############################################################
	// myentity's max and min velocity
	// ###############################################################
	if (velocity.x >= maxvelocity)
	{
		velocity.x = 2;
	}
	if (velocity.x <= minvelocity)
	{
		velocity.x = -2;
	}
	if (velocity.y >= maxvelocity)
	{
		velocity.y = 2;
	}
	if (velocity.y <= minvelocity)
	{
		velocity.y = -2;
	}
}

