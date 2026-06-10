#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};

