//
//  main.cpp
//  hello world。
//
//  Created by apple on 2021/7/17.
//

#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    for(int z = 100;z < 10000;z++)
    {
        int a,b,c,d,e,f;
 
        if(z < 1000)
        {
            a = z / 100;
            b = z % 10;
            if(a == b)
            {
                cout << z << '\t';
            }
        }
 
        else
        {
            a=z / 100;
            c=a / 10;
            d=a % 10;
            b=z % 100;
            e=b / 10;
            f=b % 10;
            if(c==f&&d==e)
            {
                cout << z << "\t";
            }
        }
    }
    return 0;
}
