#ifndef ENGINE_H
#define ENGINE_H

#include <rt2d/entity.h>

class Engine : public Entity
{
public:
	Polar polar = Polar((rand() % 360) * DEG_TO_RAD, 400.0f);

	/// @brief Constructor
	Engine();

	/// @brief Destructor
	virtual ~Engine();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

		
private:
	//private declarations

	/// @brief a Timer to rotate the color every n seconds
	Timer t;
};

#endif /* ENGINE_H */
