/*
What values do these literals represent? What type does each have?
(a) "Who goes with F\145rgus?\012" 
(b) 3.14e1L
(c) 1024f
(d) 3.14L
*/
#include <iostream>
int main()
{
	// \145 is 'e' in ASCII by octal, \012 is line feed by octal.
	std::cout << "Who goes with F\145rgus?\012" << std::endl;

	std::cout << 3.14e1L << std::endl;

	// 1024f is not allowed, we can use 1024.f
	std::cout << 1024.f << std::endl;

	std::cout << 3.14L << std::endl;

}