#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string type);
		Enemy(const Enemy &rhs);
		virtual ~Enemy(void);
		Enemy				&operator=(const Enemy &rhs);
		 virtual void		takeDamage(int damage);

//		GETTER // SETTER

		std::string			getType(void) const;
		int					getHP(void) const;

	private:
		std::string			_Type;
		int					_HP;
};

#endif