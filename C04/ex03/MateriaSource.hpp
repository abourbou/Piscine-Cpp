#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &rhs);
		~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &rhs);
		void 		learnMateria(AMateria *am);
		AMateria	*createMateria(std::string const &type) const;

	private:
		AMateria	*_source[4];
};

#endif