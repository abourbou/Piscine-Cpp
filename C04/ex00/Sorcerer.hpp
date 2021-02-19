#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string title, std::string name);
		Sorcerer(const Sorcerer &rhs);
		~Sorcerer(void);
		Sorcerer	&operator=(const Sorcerer &rhs);

		void	introduce(void) const;
		void	polymorph(Victim const &victim) const;

//		GETTER // SETTER

		std::string			gettitle(void) const;
		std::string			getname(void) const;

	private:
		std::string			m_title;
		std::string			m_name;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif