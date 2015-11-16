/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file myscene.h
 *
 * @brief description of MyScene behavior.
 */

#ifndef MYSCENE_H
#define MYSCENE_H

#include <rt2d/scene.h>

#include "myentity.h"

/// @brief The MyScene class is the Scene implementation.
class MyScene : public Scene
{
public:
	/// @brief Constructor
	MyScene() : Scene()
	{
		// start the timer.
		t.start();

		// create a single instance of MyEntity in the middle of the screen.
		// the Sprite is added in Constructor of MyEntity.
		myentity = new MyEntity();
		myentity->position = Point2(SWIDTH / 2, SHEIGHT / 2);

		// create the scene 'tree'
		// add myentity to this Scene as a child.
		this->addChild(myentity);
	}
	/// @brief Destructor
	virtual ~MyScene();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/// @brief the rotating square in the middle of the screen
	MyEntity* myentity;
	/// @brief a Timer to rotate the color every n seconds
	Timer t;
};

#endif /* SCENE00_H */
