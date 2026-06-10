#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <math.h>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &copy);
	Fixed			&operator=(const Fixed &other);
	bool			operator<(const Fixed &other);
	bool			operator<=(const Fixed &other);
	bool			operator>(const Fixed &other);
	bool			operator>=(const Fixed &other);
	bool			operator==(const Fixed &other);
	bool			operator!=(const Fixed &other);
	Fixed			operator+(const Fixed &other);
	Fixed			operator++();
	Fixed			operator++(int);
	Fixed			operator-(const Fixed &other);
	Fixed			operator--();
	Fixed			operator--(int);
	Fixed			operator*(const Fixed &other);
	Fixed			operator/(const Fixed &other);
	int				getRawBits(void) const;
	int				toInt(void) const;
	float			toFloat(void) const;;
	void			setRawBits(int const raw);
	static float	min(const Fixed &first, const Fixed &second);
	static float	max(const Fixed &first, const Fixed &second);
	~Fixed();
};

std::ostream	&operator<<(std::ostream &out, const Fixed &other);
