//
//  main.cpp
//  calculator
//
//  Created by apple on 2021/7/19.
//

#include <iostream>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
int main(){
    int FirstNum,SecondNum;
    char a;
    cin>>FirstNum>>a>>SecondNum;
    switch (a) {
        case '+':
            std::cout<<FirstNum<<"+"<<SecondNum<<"="<<FirstNum+SecondNum;
            break;
        case '-':
            std::cout<<FirstNum<<"-"<<SecondNum<<"="<<FirstNum-SecondNum;
            break;
        case '*':
            std::cout<<FirstNum<<"*"<<SecondNum<<"="<<FirstNum*SecondNum;
            break;
        case '%':
            std::cout<<FirstNum<<"%"<<SecondNum<<"="<<FirstNum%SecondNum;
        default:
            break;
            return 0;
    }
    }

