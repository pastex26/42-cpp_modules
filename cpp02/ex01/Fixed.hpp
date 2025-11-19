#include <iostream>
#include <cmath>

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
		Fixed& operator=(const Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);