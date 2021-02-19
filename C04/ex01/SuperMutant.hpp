#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &rhs);
		~SuperMutant(void);
		SuperMutant			&operator=(const SuperMutant &rhs);
		void		takeDamage(int damage);
//		GETTER // SETTER


	private:
};

#endif