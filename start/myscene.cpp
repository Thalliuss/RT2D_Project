/**
* This class describes MyScene behavior.
*
* Copyright 2015 Your Name <you@yourhost.com>
*/

#include <fstream>
#include <sstream>

#include "myscene.h"

void MyScene::addEngineparts()
{
	engineParts = new Engine();
	this->addChild(engineParts);
	engineParts->position = myentity->position;
	engine.push_back(engineParts);
}

MyScene::MyScene() : Scene()
{
	// create a single instance of MyEntity in the middle of the screen.
	// the Sprite is added in Constructor of MyEntity.
	myentity = new MyEntity();
	myentity->position = Point2(SWIDTH / 2, SHEIGHT / 2);

	// create the scene 'tree'
	// add myentity to this Scene as a child.
	this->addChild(myentity);
}


MyScene::~MyScene()
{
	// deconstruct and delete the Tree
	this->removeChild(myentity);


	// delete myentity from the heap (there was a 'new' in the constructor)
	delete myentity;
}

void MyScene::update(float deltaTime)
{
	// Escape key stops the Scene
	if (input()->getKeyUp(GLFW_KEY_ESCAPE)) {
		this->stop();
	}

	// Shoot a bullet
	if (input()->getKeyDown(GLFW_KEY_SPACE)) {

	}

	addEngineparts();
	engineParts->polar.angle = myentity->rotation;

	int s = engine.size();
	for (int i = 0; i<s; i++) {
		engine[i]->rotation = engineParts->polar.angle;
		engine[i]->position += engineParts->polar.cartesian() * -0.01 * deltaTime;
		if (engine[i]->position >= Point2(SWIDTH, SHEIGHT)) {
			removeChild(engine[i]);
		} 
		if (s >= 25) {
			engine.pop_back();
			removeChild(engine[i]);
		}
	}

	// Move myentity
	if (input()->getKey(GLFW_KEY_W)) {
		myentity->velocity.y -= 2 * deltaTime;
	}
	if (input()->getKey(GLFW_KEY_S)) {
		myentity->velocity.y += 2 * deltaTime;
	}
	if (input()->getKey(GLFW_KEY_A)) {
		myentity->velocity.x -= 2 * deltaTime;
	}
	if (input()->getKey(GLFW_KEY_D)) {
		myentity->velocity.x += 2 * deltaTime;
	}
}
