#include "Polygon.h"

using namespace objects;

Polygon::Polygon(float center[2], float radius, int sides)
	: radius(radius), sides(sides) {
    this->center[0] = center[0];
    this->center[1] = center[1];

    std::cout << "(" << center[0] << ", " << center[1] << "), "
        << radius << ", "
        << sides << std::endl;
}

void Polygon::draw() {
    glBegin(GL_POLYGON);
    for (int i = 0; i < sides; i++) {
        glVertex2f(cosf(toRadians(360.f * i / sides)) * radius, sinf(toRadians(360.f * i / sides)) * radius);
    }
    glEnd();
}

float Polygon::toRadians(float degrees) {
    return degrees * pi / 180;
}