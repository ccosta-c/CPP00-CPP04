
#include "Point.hpp"

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (fabs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();
	float ABC = area(ax,ay, bx, by, cx, cy);
	float trinity = area(px, py, bx, by, cx, cy);
	trinity += area(ax, ay, px, py, cx, cy);
	trinity += area(ax, ay, bx, by, px, py);
	if (trinity == ABC)
		return (true);
	else
		return (false);
}
