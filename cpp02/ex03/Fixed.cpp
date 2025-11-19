#include "Fixed.hpp"

//###constructor / destructor###
Fixed::Fixed(): _raw(0) {
	if (DEBUG)
		std::cout << "Fixed Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	if (DEBUG)
		std::cout << "Fixed Int constructor called" << std::endl;
	_raw = value << _bits;
}

Fixed::Fixed(const float value) {
	if (DEBUG)
		std::cout << "Fixed Float constructor called" << std::endl;
	_raw = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &other) {
	if (DEBUG)
		std::cout << "Fixed Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	if (DEBUG)
		std::cout << "Fixed Destructor called" << std::endl;
}

// ###build function###

int Fixed::getRawBits(void) const {
	return _raw;
}

void Fixed::setRawBits(const int raw) {
	_raw = raw;
}

// ###operator arithmetic###

Fixed& Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		_raw = other.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed res;

	res.setRawBits(this->_raw + other.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed res;

	res.setRawBits(this->_raw - other.getRawBits());
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed res;

	res.setRawBits((this->_raw << _bits) / other.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed res;

	res.setRawBits(this->_raw * other.getRawBits() >> this->_bits);
	return res;
}

// ###operator comparator###
bool Fixed::operator>(const Fixed &other) const {
	return (this->_raw > other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_raw >= other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->_raw < other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_raw <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_raw == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_raw != other.getRawBits());
}


int	Fixed::toInt(void) const {
	return (_raw >> _bits);
}

float	Fixed::toFloat(void) const {
	return ((float)_raw / (float)(1 << _bits));
}

// ###min / max###

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

// ###incrementation / decrementation###

Fixed& Fixed::operator++(void) {
	this->_raw++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->_raw++;
	return tmp;
}

Fixed& Fixed::operator--(void) {
	this->_raw--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->_raw--;
	return tmp;
}

// ###operator insert###

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return (o);
}
