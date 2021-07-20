/*
 Check the difference of the code.
Make more necessary comments in your code, such as identify the function of a part of codes.
 Well Done for your first programe
 */
#include <iostream>
#include <stdio.h>
#include <stdbool.h>// useless here
using namespace std;
int main(){
    int FirstNum,SecondNum;
    char a;
    cin>>FirstNum>>a>>SecondNum;// in C type, you can write:    scanf("%d%c%d",&FirstNum,&a,&SecondNum);
    switch (a) {//some system do not support const char like "+", use numbers of char can reduce bugs.
        case '+':{
            cout<<FirstNum<<"+"<<SecondNum<<"="<<FirstNum+SecondNum;// no need of std:: here
            break;
        }
        case '-':{
            cout<<FirstNum<<"-"<<SecondNum<<"="<<FirstNum-SecondNum;
            break;
        }
        case '*':{
            cout<<FirstNum<<"*"<<SecondNum<<"="<<FirstNum*SecondNum;
            break;
        }
        case '%':{
            cout<<FirstNum<<"%"<<SecondNum<<"="<<FirstNum%SecondNum;
            break;// DO NOT FORGET BREAK!!!!!
        }
        default:{
            cout<<"Error!"<<endl;
            break;
        }
    }
    return 0;//Make sure your "return 0;" has its right position
}

