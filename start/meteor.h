#ifndef METEOR_H
#define METEOR_H

#include <rt2d/entity.h>
#include <random>

#include <deque>


class Meteor : public Entity
{
public:
	Meteor();
	virtual ~Meteor();

	void particles();

	virtual void update(float deltaTime);

private:
	int velocity_x;
	int velocity_y;
	Vector2 velocity;
};

#endif /* METEOR_H */