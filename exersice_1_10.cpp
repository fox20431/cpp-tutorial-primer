// Use the decrement operator (--) to write a while that prints the numbers from ten down to zero.
#include <iostream>
int main()
{
    int value = 10;
    while (value < 0)
    {
        value--;
        std::cout << value << std::endl;
    }
    return 0;
}
