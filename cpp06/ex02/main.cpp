#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
#include <unistd.h>

Base*	generate()
{
	srand((unsigned int)time(NULL));
	int i = rand() % 3;

	switch(i)
	{
		case 0 :
			std::cout << "A is generated" << std::endl;
			return (new A);

		case 1 :
			std::cout << "B is generated" << std::endl;
			return (new B);

		case 2 :
			std::cout << "C is generated" << std::endl;
			return (new C);
	}
	return (NULL);
}

void	identify(Base *p)
{
	A *ptrA = dynamic_cast<A*>(p);
	if (ptrA)
    {
        std::cout << "Base 'A' has been identifed by pointer"<< std::endl;
        return ;
	}
	if (dynamic_cast<B*>(p))
    {
        std::cout << "Base 'B' has been identifed by pointer"<< std::endl;
        return ;
	}
	if (dynamic_cast<C*>(p))
    {
        std::cout << "Base 'C' has been identifed by pointer"<< std::endl;
        return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A &refA = dynamic_cast<A&>(p);
		static_cast<void>(refA);
			std::cout << "Base 'A' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::exception &e) {
		(void)e;
	}
	try
	{
		B &refB = dynamic_cast<B&>(p);
		static_cast<void>(refB);
        std::cout << "Base 'B' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::exception &e) {
		(void)e;
	}
	try
	{
		C &refC = dynamic_cast<C&>(p);
		static_cast<void>(refC);
        std::cout << "Base 'C' identifed by reference" << std::endl;
		return ;	
	}
	catch(const std::exception &e) {
		(void)e;
	}
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		Base *gen = generate();
		identify(*gen);
		identify(gen);
		delete gen;
		std::cout << "----------------------" << std::endl;
		sleep(1);
	}
}
