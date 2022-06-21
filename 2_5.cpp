/*
Exercise 2.5: Determine the type of each of the following literals. Explain
the differences among the literals in each of the four examples: 
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 10uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2
*/

#include "iostream"
#include "typeinfo"

int main()
{
    // (a)
	std::cout << "value: " << 'a' << "\t" << "type: " << typeid('a').name() << std::endl;
	std::cout << "value: " << "L'a'" << "\t" << "type: " << typeid(L'a').name() << std::endl;
	std::cout << "value: " << "a" << "\t" << "type: " << typeid("a").name() << std::endl;
	std::cout << "value: " << "L\"a\"" << "\t" << "type: " << typeid(L"a").name() << std::endl;
    printf("\n");

    // (b)
	std::cout << "value: " << 10 << "\t" << "type: " << typeid(10).name() << std::endl;
	std::cout << "value: " << 10u << "\t" << "type: " << typeid(10u).name() << std::endl;
	std::cout << "value: " << 10L << "\t" << "type: " << typeid(10L).name() << std::endl;
	std::cout << "value: " << 10uL << "\t" << "type: " << typeid(10uL).name() << std::endl;
	std::cout << "value: " << 012 << "\t" << "type: " << typeid(012).name() << std::endl;
	std::cout << "value: " << 0x12 << "\t" << "type: " << typeid(0x12).name() << std::endl;
    printf("\n");

    // (c)
    std::cout << "value: " << 3.14 << "\t" << "type: " << typeid(3.14).name() << std::endl;
	std::cout << "value: " << 3.14f << "\t" << "type: " << typeid(3.14f).name() << std::endl;
	std::cout << "value: " << 3.14L << "\t" << "type: " << typeid(3.14L).name() << std::endl;
    printf("\n");

    // (d) 10, 10u, 10., 10e-2
    std::cout << "value: " << 10 << "\t" << "type: " << typeid(10).name() << std::endl;
    std::cout << "value: " << 10u << "\t" << "type: " << typeid(10u).name() << std::endl;
	std::cout << "value: " << 10. << "\t" << "type: " << typeid(10.).name() << std::endl;
	std::cout << "value: " << 10e-2 << "\t" << "type: " << typeid(10e-2).name() << std::endl;

}