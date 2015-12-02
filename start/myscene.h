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
#include <demo/superscene.h>

#include "myentity.h"
#include "engine.h"
#include "bullet.h"
#include "deque"

/// @brief The MyScene class is the Scene implementation.
class MyScene : public Scene
{
public:
	/// @brief Constructor
	MyScene();
	/// @brief Destructor
	virtual ~MyScene();

	void addEngineparts();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);


private:
	/// @brief User controllable spaceship
	MyEntity* myentity;

	/// @brief engine
	Engine* engineParts;


	/// @brief bullet
	Bullet* bullet;

	/// @brief A collection of parts
	std::deque<Engine*> engine;
};

#endif /* SCENE00_H */
