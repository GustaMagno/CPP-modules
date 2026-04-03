# include <iostream>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <string>
# include <iomanip>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};