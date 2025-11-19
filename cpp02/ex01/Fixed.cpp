#include "Fixed.hpp"

Fixed::Fixed(): _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	_raw = value << _bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_raw = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

int	Fixed::toInt(void) const {
	return (_raw >> _bits);
}

float	Fixed::toFloat(void) const {
	return (_raw / (1 << _bits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return (o);
}
