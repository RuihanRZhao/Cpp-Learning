#include<iostream>		//c++ Input & Output stream
#include<stdbool.h>		//C or C++ boolean calculate
#include<stdio.h>		//c Input & Output stream

using namespace std;


int IfPalindrome(int num);
int main() {
	//input part
	unsigned int StartNum, EndNum;
	printf("Please input a start intager: ");
	scanf_s("%d", &StartNum);
	printf("Please input an end intager: ");
	scanf_s("%d", &EndNum);
	//analyze part
	int counter = 0;
	for (int i0 = StartNum; i0 <= EndNum; i0++) {
		if (IfPalindrome(i0)) {
			counter++;
			cout <<counter<<"\t"<< i0 << endl;
		}
	}
	printf("\n\n\nBetween %d and %d, there are %d numbers are Palindrome.\n\n\n", StartNum, EndNum, counter);
	return 0;
}
int IfPalindrome(int num) {
	int NumSize=0,Num=num,reverseNum=0;
	while(true) {
		Num /= 10;
		if (Num > 0) {
			NumSize++;
		} else if (Num == 0) {
			NumSize++;
			break;
		} else if (Num < 0) {
			cout << "Error! In "<<num<<" analyze" << endl;
			break;
		}
	}
	Num = num;
	for (int i0 = 0; i0 < NumSize; i0++) {
		reverseNum *= 10;
		reverseNum += (Num %10);
		Num /= 10;
	}
	if (reverseNum == num) return true;
	else return false;
}