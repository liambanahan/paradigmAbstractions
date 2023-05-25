// Your First C++ Program

#include <iostream>
#include "Point.h"

int main() {
	std::cout << "Hello World!\n";
	Point* p1 = new Point(1, 2);
	Point p2(3, 4);
	std::cout << p1->toString() + '\n';
	std::cout << p2.toString() + '\n';

	return 0;
}