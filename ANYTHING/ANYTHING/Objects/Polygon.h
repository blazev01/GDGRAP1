#ifndef OBJECTS_POLYGON_H
#define OBJECTS_POLYGON_H

#include "GLFW/glfw3.h"
#include "math.h"
#include "iostream"

namespace objects {

	class Polygon {
	private:
		float center[2];
		float radius;
		int sides;

		const float pi = 3.14159;

	public:
		Polygon(float center[2], float radius, int sides);

	public:
		void draw();

	private:
		float toRadians(float degrees);

	};
}

#endif