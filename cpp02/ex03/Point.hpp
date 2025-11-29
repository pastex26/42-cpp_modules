#pragma once
#include <iostream>
#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y; 

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		~Point();

		Point&	operator=(const Point &other);
		const Fixed	getX(void) const;
		const Fixed	getY(void) const;
	
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream	&operator<<(std::ostream &o, Point const &point);