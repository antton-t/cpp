#include <iostream>
#include <stdint.h>

typedef struct Data_s
{
    int int1;
    int int2;
}   Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

void	printData(Data *s)
{
	std::cout << "value 1 ==> " << s->int1 << std::endl;
	std::cout << "value 2 ==> " << s->int2 << std::endl;
}

int main()
{
	Data a = {1, 2};
	Data *res = NULL;
	uintptr_t resl = 0;

	printData(&a);
	resl = serialize(&a);
	res = deserialize(resl);
	std::cout << resl << std::endl;
	printData(res);
	return (0);
}
