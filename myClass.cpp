#include <iostream>
#include "Sales_item.h"

int main()
{
    // Sales_item book;
    // std::cin >> book;
    // std::cout << book << std::endl;

    // return 0;
    
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;
    // std::cout << item1+ item2 << std::endl;


    // Sales_item book;
    // while(std::cin >> book){
    //     std::cout << book << std::endl;
    // }

   Sales_item currBook, book;
   if(std::cin >> currBook){
       while(std::cin >> book){
           if(currBook.isbn() == book.isbn()){
               currBook += book;
           }else{
               std::cout << currBook <<std::endl;
               currBook = book;
           }
       }
       std::cout << currBook <<std::endl;
   }else {
       std::cerr << "No data?!" << std::endl;
       return -1;
   }

    return 0;
}