/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file myentity.h
 *
 * @brief description of MyEntity behavior.
 */

#ifndef MYENTITY_H
#define MYENTITY_H

#include "engine.h"
#include <rt2d/entity.h>

/// @brief The MyEntity class is the Entity implementation.
class MyEntity : public Entity
{
public:
	float maxvelocity = 3; /**< @brief The maximum amount of velocity a boid can have */
	float minvelocity = -3; /**< @brief The minimum amount of velocity a boid can have */
	Vector2 velocity = Vector2(0.0f, 0.0f);

	/// @brief Constructor
	MyEntity();

	/// @brief Destructor
	virtual ~MyEntity();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/* add your private declarations */

	/// @brief a Timer to rotate the color every n seconds
	Timer t;
};

#endif /* MYENTITY_H */
