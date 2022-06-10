#include<iostream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(){

    double price = 0.0;
    Sales_data data1, data2;
    //读入data的参数
    std::cin >> data1.bookNo >>data1.units_sold >> price;

}