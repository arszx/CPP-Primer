#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    
    /*
     * Wrong annotation message
     * this is /* wrong */ will be error
     */

    return 0;
}