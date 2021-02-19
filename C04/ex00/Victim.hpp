#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <string>

class Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(const Victim &rhs);
		~Victim(void);
		Victim				&operator=(const Victim &rhs);

		void	introduce(void);
		virtual void	getPolymorphed(void) const;
//		GETTER // SETTER

		std::string			getname(void) const;

	private:
		std::string			_name;
};

std::ostream	&operator<<(std::ostream &o, const Victim &rhs);
#endif