#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(const Peon &rhs);
		~Peon(void);
		Peon				&operator=(const Peon &rhs);

//		MEMBER FUNCTIONS
		void	getPolymorphed(void) const;

//		GETTER // SETTER


	private:
};

#endif