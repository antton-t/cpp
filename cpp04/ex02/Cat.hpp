#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal, virtual public Brain
{
	public :

	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat &src);

	Cat	&operator=(const Cat &other);
	virtual void	makeSound(void) const;
	virtual void	myBrain(void) const;
	std::string		getType(void);

	private :

};

#endif
