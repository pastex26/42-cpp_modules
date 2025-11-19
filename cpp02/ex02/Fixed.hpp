#include <iostream>
#include <cmath>

#ifndef DEBUG
#define DEBUG 0
#endif

class Fixed {
	private:
		int					_raw;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed&	operator=(const Fixed &other);
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);