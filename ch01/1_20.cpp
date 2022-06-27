// Revise the following program that printed a range of numbers so that it handles input in which the first number is smaller than the second.

#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    for (Sales_item item; std::cin >> item;)
        std::cout << item << std::endl;
    return 0;
}