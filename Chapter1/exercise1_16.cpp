#include <iostream>

int main()
{
    int sum = 0, value = 0;
    std::cout << "Pls input value:" << std::endl;
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "Sum of input is: " << sum << std::endl;

    return 0;
}