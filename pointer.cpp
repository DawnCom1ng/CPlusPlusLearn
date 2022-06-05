#include <iostream>

int main()
{
    // int val = 42;
    // int val1 = 42;
    // int *p = &val;
    // int *d = &val1;


    // if (p == d) {
    //     std::cout << "value" << std::endl;
    // }else{
    //     std::cout << "address" << std::endl;
    // }

    // std::cout << *p << " " << *d << std::endl;

    // int x = 0;

    // int *p = nullptr;
    // int *p1 = 0;
    // int *p2 = &x;

    // if(p1)
    // {
    //     std::cout << "true" << std::endl;
    // }else{
    //     std::cout << "false" << std::endl;
    // }


    // if(p2)
    // {
    //     std::cout << "true" << std::endl;
    // }else{
    //     std::cout << "false" << std::endl;
    // }

    // if(*p2)
    // {
    //     std::cout << "true" << std::endl;
    // }else{
    //     std::cout << "false" << std::endl;
    // }
    
    
    int c = 0;
    int &d = c;
    const int &e = c;
    d = 3;
    

    std::cout << d << e << std::endl;
    //std::cout << "debug" << d <<std::endl;

}