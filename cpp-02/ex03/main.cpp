#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point inside(3, 3);
	Point outside(20, 20);
	Point edge(5, 0);
	Point vertex(0, 0);

	std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
	std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
	std::cout << "Edge: " << bsp(a, b, c, edge) << std::endl;
	std::cout << "Vertex: " << bsp(a, b, c, vertex) << std::endl;

	return 0;
}
