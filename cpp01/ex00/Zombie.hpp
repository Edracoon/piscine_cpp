#include <iostream>

class Zombie
{
	private:
			std::string	_name;
	public:
			Zombie(std::string _name);
			~Zombie();
			void 		announce( void );
			void		setName(std::string name);
			std::string	getName();
			void 		randomChump(std::string name);
};