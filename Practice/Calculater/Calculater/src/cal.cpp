#include<iostream>
#include<stdbool.h> //boolean use

/*
Make a Calculater can use + - * /(float) 
with 2 integers input
output a fomula
time limit: 60 minutes
*/

int main() {
	int FirstNum, SecondNum;
	char Method;
	std::cin >> FirstNum >> Method >> SecondNum;
	if (Method == 43) {//+
		std::cout << FirstNum << " + " << SecondNum << " = " << FirstNum + SecondNum;
	}
	else if (Method == 45) {//-
		std::cout << FirstNum << " - " << SecondNum << " = " << FirstNum - SecondNum;
	}
	else if (Method == 42) {//*
		std::cout << FirstNum << " * " << SecondNum << " = " << FirstNum * SecondNum;
	}
	else if (Method == 47) {// /
		std::cout << FirstNum << " / " << SecondNum << " = " << FirstNum / (SecondNum * 1.0);
	}
	else {
		std::cout << "Error!";
	}
	return 0;
}