#include <iostream>

int main()
{
    int i = 10;
    int *ptr = &i;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 20;
    std::cout << *ptr << std::endl;

    ptr = nullptr;
    std::cout << ptr << std::endl;

    return 0;
}