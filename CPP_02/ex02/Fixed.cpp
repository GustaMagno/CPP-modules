#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(int number)
{
	this->value = number * 256;
}
Fixed::Fixed(float number)
{
	this->value = roundf(number * 256.0);
}

Fixed::Fixed(const Fixed &copy)
{
	this->value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->value = other.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits() const
{
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::toInt() const
{
	return this->value / 256;
}

float	Fixed::toFloat() const
{
	return this->value / 256.0;
}

bool	Fixed::operator<(const Fixed &other)
{
	return (this->value < other.getRawBits());
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->value > other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (this->value <= other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (this->value >= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other)
{
	return (this->value == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (this->value != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	result;

	result.setRawBits(this->value + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	result;

	result.setRawBits(this->value - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	result;

	result.setRawBits((this->value * other.getRawBits()) / 256);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	result;

	result.setRawBits((this->value * 256) / other.getRawBits());
	return (result);
}

Fixed	Fixed::operator++()
{
	return(this->value++, *this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result(*this);

	return (this->value++, result);
}

Fixed	Fixed::operator--()
{
	return(this->value--, *this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result(*this);

	return (this->value--, result);
}


float	Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first.toFloat());
	else
		return (second.toFloat());
}

float	Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first.toFloat());
	else
		return (second.toFloat());
}
