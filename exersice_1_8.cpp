#include<iostream>
int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */;
    // fix
    std::cout << /* "*/" /* "/*" */;
}