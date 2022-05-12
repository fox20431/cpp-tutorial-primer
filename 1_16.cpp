// Write your own version of a program that prints the sum of a set of integers read from cin.

#include <iostream>
int main()
{
    int sum = 0, value = 0;
    std::cout << "Enter the any number of numbers you want, separated by spaces or carriage returns: " << std::endl;
    // eof stands for end of file. windows use ctrl + z, linux and mac use ctrl + d.
    std::cout << "Note: end with eof. " << std::endl;
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
}