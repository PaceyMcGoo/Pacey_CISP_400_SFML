#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Bat
{
	public:
		Bat(float startX, float startY);
		FloatRect getPosition();
		void moveRight();
		void moveLeft();
		void stopLeft();
		void stopRight();
		void update(Time dt);
		RectangleShape getShape();

	private:
		Vector2f m_Position;
		RectangleShape m_Shape;
		float m_Speed = 1000.0f;
		bool m_MovingRight = false;
		bool m_MovingLeft = false;
};