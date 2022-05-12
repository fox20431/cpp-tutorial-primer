// Explain whether the following program fragment is legal.
// If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?
#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    // std::cout << "The sum of " << v1; << " and " << v2; << " is " << v1 + v2 << std::endl;
    // fix
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}