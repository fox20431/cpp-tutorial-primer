// Rewrite the following exercises using for loops.

/*
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
*/


#include <iostream>
int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; val++)
    {
        sum += val; // assigns sum + val to sum
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}