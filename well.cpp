#include <iostream>
#include "well.h"

Well :: Well(int r, int d, float f) : radius(r), depth(d), fill(f)
{}

float Well :: volume(int radius, int depth)
{
	float v;
	v = 3.14159 * std::pow(((float) radius), 2) * (float) depth;
	return v;
}

float
