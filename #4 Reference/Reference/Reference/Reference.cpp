#include <iostream>

int main()
{
    int OriNum = 10;
    int& Test_Reference = OriNum;
    std::cout
        << OriNum << std::endl
        << Test_Reference << std::endl
        << &OriNum << std::endl
        << &Test_Reference << std::endl;
    int&& RvalueNum = static_cast<int>(OriNum);//rvalue only contains value
    std::cout
        << OriNum << std::endl
        << RvalueNum << std::endl
        << &OriNum << std::endl
        << &RvalueNum << std::endl;
    //give more varible names (reference) to a value
}
