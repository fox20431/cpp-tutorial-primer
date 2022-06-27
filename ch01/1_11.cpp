// Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.
#include <iostream>
int main()
{
    int max=0, min=0;
    std::cout << "Enter min numbers:" << std::endl;
    std::cin >> min;
    std::cout << "Enter max numbers:" << std::endl;
    std::cin >> max;
    int temp = min;
    std::cout << "The range specified by those two integers:" << std::endl;
    while (temp <= max)
    {
        std::cout << temp << std::endl;
        temp++;
    }
    return 0;
}
