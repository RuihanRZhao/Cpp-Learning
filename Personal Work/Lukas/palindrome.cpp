//
//  main.cpp
//  hello world。
//
//  Created by apple on 2021/7/17.
//

#include<iostream>
#include<iomanip>//I am not sure why you use this. I hope that you did not copy others code. I choose to believe you this time. Also, you can try to make more surprise to me.
using namespace std;
 
int main(){//I think "{" should not take up a single line, it is a waste of space
    for(int z = 100;z < 10000;z++){
        int a,b,c,d,e,f;//Others cannot understand what is these variables for. Try to use more meaningful name.
        if(z < 1000){//Why 1000?
            a = z / 100;
            b = z % 10;
            if(a == b){
                cout << z << '\t';
            }
        }
        else{//this function cannot measure more digital numbers, think about it and impore your code. You can find a way to reverse the number and compare two numbers, try to reduce your variables. Limit 3 variables in the next version.
            a=z / 100;
            c=a / 10;
            d=a % 10;
            b=z % 100;
            e=b / 10;
            f=b % 10;
            if(c==f && d==e){//try to use only one condition for this if()
                cout << z << "\t";
            }
        }
    }
    return 0;
}
