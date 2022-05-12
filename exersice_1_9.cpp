// Write a program that uses a while to sum the numbers from 50 to 100.
#include <iostream>
int main()
{
    int value = 50;
    int sum = 0;
    while (value <= 100)
    {
        sum = sum + value;
        value++;
    }
    std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;
}