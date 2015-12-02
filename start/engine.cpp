#include "engine.h"

Engine::Engine() : Entity()
{
	t.start();
	this->addSprite("assets/boid.tga");
	this->sprite()->color = RED;
}

Engine::~Engine()
{

}

void Engine::update(float deltaTime)
{
	if (t.seconds() > 0.0333f) {
		RGBAColor color = this->sprite()->color;
		this->sprite()->color = Color::rotate(color, 0.08f);
		t.start();
	}
}

