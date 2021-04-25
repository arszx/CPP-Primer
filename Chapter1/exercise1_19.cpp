#include <iostream>

int main()
{
    int first = 0, second = 0;
    std::cin >> first;
    std::cin >> second;
    if (first < second) {
        while (first <= second)
        {
            std::cout << first << std::endl;
            ++first;
        }
    }
    else {
        std::cout << "Pls make sure first value smaller than second value, exit!" << std::endl;;
    }

    return 0; 
}