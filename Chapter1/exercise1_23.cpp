#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item curBook, book;
    if (std::cin >> curBook) {
        int cnt = 1;
        while (std::cin >> book) {
            if (book.isbn() == curBook.isbn()) {
                ++cnt;
            }
            else {
                std::cout << "Book " << curBook.isbn() << " has "
                          << cnt << " sells history." << std::endl;
                curBook = book;
                cnt = 1;
            }
        }
        std::cout << "Book " << curBook.isbn() << " has "
                  << cnt << " sells history." << std::endl;
    }
    else {
        std::cout << "Pls input valid sell message!" << std::endl;
    }
    
    return 0;
}