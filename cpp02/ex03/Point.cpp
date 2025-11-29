#include "Point.hpp"

Point::Point(): x(Fixed()), y(Fixed()) {
	if (DEBUG)
		std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y)) {
	if (DEBUG)
		std::cout << "Point Float constructor called" << std::endl;
}

Point::Point(const Point &other): x(Fixed(other.getX())), y(Fixed(other.getY())) {
	if (DEBUG)
		std::cout << "Point Copy constructor called" << std::endl;
}

Point::~Point() {
	if (DEBUG)
		std::cout << "Point destructor called" << std::endl;
}

Point&	Point::operator=(const Point &other) {
	std::cerr << "Error: cannot assign Point with const members" << std::endl;
	(void)other;
	return *this;
}

const Fixed	Point::getX(void) const {
	return x;
}

const Fixed	Point::getY(void) const {
	return y;
}

std::ostream	&operator<<(std::ostream &o, Point const &point) {
	o << "(" << point.getX() << ", " << point.getY() << ")";
	return o;
}

static Fixed sign(Point const &a, Point const &b, Point const &x) {
	Point vec1((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
	Point vec2((x.getX() - a.getX()).toFloat(), (x.getY() - a.getY()).toFloat());

	return vec1.getX() * vec2.getY() - vec1.getY() * vec2.getX();
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed s1 = sign(a, b, point);
	Fixed s2 = sign(b, c, point);
	Fixed s3 = sign(c, a, point);

	if (s1 == 0 || s2 == 0 || s3 == 0)
		return false;
	if (s1 > 0 && s2 > 0 && s3 > 0)
		return true;
	if (s1 < 0 && s2 < 0 && s3 < 0)
		return true;
	return false;
}
