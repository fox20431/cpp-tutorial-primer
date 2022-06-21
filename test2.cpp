#include <iostream>
#include <typeinfo>
int main()
{
	float a = 0.3E0; // 0.3x10^0=0.3x1 result 0.3
	float b = 0.3E1; // 0.3x10^1=0.3x10  result 3

	a = 0.3f;

	std::cout << "value: " << a << "\t"  << "type: " << typeid(a).name() << std::endl;
	std::cout << "value: " << b << "\t" << "type: " << typeid(b).name() << std::endl;
	// std::cout << "value: " << c << "\t"  << "type: " << typeid(c).name() << std::endl;
}