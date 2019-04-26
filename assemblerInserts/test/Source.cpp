#include <iostream>

/*void main()
{
	int i = 0;
	for (; i < 5; i += 3)
		i = i*i;
	std::cout << i;
	std::cin.get();
}*/

int main()
{
	int i=0;
	_asm
	{
		INC i;
	}
	std::cout << i;
	std::cin.get();
	return 0;
}