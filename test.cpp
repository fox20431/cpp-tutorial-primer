#include <iostream>
#include <typeinfo>
int main()
{
	int a = -20;   // decimal
	int b = -0x14; // hex
	int c = -024;  // octal

	std::cout << "value: " << a << "\t" << "type: " << typeid(a).name() << std::endl;
	std::cout << "value: " << b << "\t" << "type: " << typeid(b).name() << std::endl;
}