#pragma once

#include <sstream>
#include <string>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double initX, double initY) {
		this->x = initX;
		this->y = initY;
	}
	double getX() { return x; }
	double getY() { return y; }

	string toString() {
		std::ostringstream oss;
		oss << "(" << this->x << ", " << this->y << ")";
		return oss.str();
	}
};

