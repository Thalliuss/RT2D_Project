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

#include <deque>

#include "myentity.h"
#include "engine.h"
#include "bullet.h"
#include "meteor.h"


/// @brief The MyScene class is the Scene implementation.
class MyScene : public Scene
{
public:
	/// @brief Constructor
	MyScene();
	/// @brief Destructor
	virtual ~MyScene();

	void spawnMeteor();

	void addEngineParts();

	void addBulletParts();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	int timer = 200;

	/// @brief the rotating square in the middle of the screen
	MyEntity* myentity;
	Meteor* meteor;

	/// @brief engine
	Engine* engineParts;

	/// @brief bullet
	Bullet* bulletParts;

	/// @brief A collection of parts
	std::deque<Engine*> engine;
	std::deque<Bullet*> bullets;
	std::deque<Meteor*> meteors;
};

#endif /* SCENE00_H */
