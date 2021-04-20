#include <iostream>

int main()
{
    int i = 0, j = 0;
    std::cout << "Please input 2 integers:" << std::endl;
    std::cin >> i >> j;
    std::cout << "All integers between this 2 integers are:" << std::endl;
    while (i <= j)
    {
        std::cout << i << std::endl;
        ++i;
    }

    return 0; 
}