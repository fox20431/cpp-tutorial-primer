// Revise the following program that printed a range of numbers so that it handles input in which the first number is smaller than the second.

/*
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 10)
    {
        sum += val; // assigns sum + val to sum ++val; // add 1 to val
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
*/

// method 1
/*
#include <iostream>
int main()
{
    int min = 0, max = 0;
    std::cout << "Please enter two numbers, all numbers within the range of the two numbers will be printed: " << std::endl;
    std::cin >> min >> max;
    while (min >= max)
    {
        std::cout << "The first number must less than second number, please enter again! ";
        std::cin >> min >> max;
    }
    for (int temp = min; temp <= max; temp++)
    {
        std::cout << temp << std::endl;
    }
    return 0;
}
*/

#include <iostream>
int main()
{
    int min = 0, max = 0;
    std::cout << "Please enter two numbers where all numbers within the range of the two numbers will be printed: " << std::endl;
    std::cin >> min >> max;
    while (true)
    {
        if (min < max)
        {
            for (int temp = min; temp =< max; temp++)
            {
                std::cout << temp << std::endl;
            }
            return 0;
        }
        std::cout << "The first number must less than second number, please enter again! ";
        std::cin >> min >> max;
    }
}