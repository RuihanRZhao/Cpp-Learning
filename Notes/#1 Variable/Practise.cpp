#include <iostream>

#include<stdio.h>
#include<stdbool.h>
#include<cmath>

//Global Value
int Test_int_Global;// initialized to 0
#include<cstdint>
using namespace std;
//fixed-sized integer types in #include<cstdint>
//first bit is (negative or positive)
int8_t  TestIntFixed8 = 127;    //                      -(2^7)  to  (2^7)-1     %d       
int16_t TestIntFixed16 = 32767; //                      -(2^15) to (2^15)-1     %d
int32_t TestIntFixed32 = 2147483647;     //             -(2^31) to (2^31)-1     %ld
int64_t TestIntFixed64 = 9223372036854775807;     //    -(2^63) to (2^63)-1     %lld

int main(){
    ////identify of varible types
    char Test_char = 't';                   //  1 byte      one character
    bool Test_bool = 1;                     //  1 byte      a boolean value,                    ==0 false, !=0 true(with value of 1)
    short Test_short = 32767;               //  2 byte      integer,                            -(2^15) to (2^15)-1     %d
    int Test_int = 2147483647;              //  4 byte      integer,                            -(2^31) to (2^31)-1     %d
    long Test_long = 0;                     //  4/8 byte    integer,                            -(2^31) to (2^31)-1     %ld
    long long Test_long_long = 0;           //  8 byte      integer,                            -(2^63) to (2^63)-1     %lld
    float Test_float = 1.11;                //  4 byte      single-precision floating number,
    double Test_double = 1.111;             //  8 byte      double-precision floating number,
    long double Test_long_double = 1.1111;  //  8/16 byte   floating-point number,
    //size of varible types 
    std::cout << "Size of varibles"
        << "char:        " << sizeof(Test_char)         << "\n"
        << "bool:        " << sizeof(Test_bool)         << "\n"     
        << "short:       " << sizeof(Test_short)        << "\n"
        << "int:         " << sizeof(Test_int)          << "\n"
        << "long:        " << sizeof(Test_long)         << "\n"
        << "long long:   " << sizeof(Test_long_long)    << "\n"
        << "float:       " << sizeof(Test_float)        << "\n"
        << "double:      " << sizeof(Test_double)       << "\n"
        << "long double: " << sizeof(Test_long_double)  << "\n"
        << "int8_t:      " << sizeof(TestIntFixed8)     << "\n"
        << "int16_t:     " << sizeof(TestIntFixed16)    << "\n"
        << "int32_t:     " << sizeof(TestIntFixed32)    << "\n"
        << "int64_t:     " << sizeof(TestIntFixed64)    << "\n"
        << "\n";
    ////local value
    int Test_int_local_main;// uninitialized value, error C4700
    //output stream
    std::cout << static_cast<bool>(Test_bool) <<"\n";// std is included in #include <iostream>
    printf("%d", Test_bool);

}

