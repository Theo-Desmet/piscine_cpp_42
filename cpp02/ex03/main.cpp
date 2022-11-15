#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	bool res;
	Point a(1, 0);
	Point b(0, 1);
	Point c;
	Point d(0.3, 0.3);
	Point e(0.5, 0.5);
	Point f(1, 1);
	Point g(0.8, 0.1);
	Point h(0.1, 0.8);

	std::cout << "triangle: A=(1, 0) B=(0, 1) C=(0, 0)" << std::endl << std::endl;
	std::cout << "D=(0.3, 0.3)" << std::endl;
	res = bsp(a, b, c, d);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "E=(0.5, 0.5)" << std::endl;
	res = bsp(a, b, c, e);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "F=(1, 1)" << std::endl;
	res = bsp(a, b, c, f);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "G=(0.8, 0.1)" << std::endl;
	res = bsp(a, b, c, g);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "H=(0.1, 0.8)" << std::endl;
	res = bsp(a, b, c, h);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << std::endl;

	Point a1(0, 1), b1(1, 1), c1(0, 0);
	std::cout << "triangle: A=(0, 1) B=(1, 1) C=(0, 0)" << std::endl << std::endl;
	std::cout << "D=(0.3, 0.3)" << std::endl;
	res = bsp(a1, b1, c1, d);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "E=(0.5, 0.5)" << std::endl;
	res = bsp(a1, b1, c1, e);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "F=(1, 1)" << std::endl;
	res = bsp(a1, b1, c1, f);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "G=(0.8, 0.1)" << std::endl;
	res = bsp(a1, b1, c1, g);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "H=(0.1, 0.8)" << std::endl;
	res = bsp(a1, b1, c1, h);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << std::endl;


	Point a2(1.2, 0.4), b2(0, 0.5), c2(0.9, 0.1);
	std::cout << "triangle: A=(1.2, 0.4) B=(0, 0.5) C=(0.9, 0.1)" << std::endl << std::endl;
	std::cout << "D=(0.3, 0.3)" << std::endl;
	res = bsp(a2, b2, c2, d);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "E=(0.5, 0.5)" << std::endl;
	res = bsp(a2, b2, c2, e);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "F=(1, 1)" << std::endl;
	res = bsp(a2, b2, c2, f);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "G=(0.8, 0.1)" << std::endl;
	res = bsp(a2, b2, c2, g);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	std::cout << "H=(0.1, 0.8)" << std::endl;
	res = bsp(a2, b2, c2, h);
	(res) ? std::cout << "\033[1;32mpoint in triangle\033[1;0m" << std::endl
		: std::cout << "\033[1;31mpoint not in triangle\033[1;0m" << std::endl;
	return (0);
}
