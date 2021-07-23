#include<iostream>



int main() {
	int FirstNum, SecondNum;
	char Method;
	std::cin >> FirstNum >> Method >> SecondNum;
	if (Method == 43) {// +
		std::cout << FirstNum << "+" << SecondNum << "=" << FirstNum + SecondNum;
	}
	else if (Method == 45) {// -
		std::cout << FirstNum << "-" << SecondNum << "=" << FirstNum - SecondNum;
	}
	else if (Method == 42) {// *
		std::cout << FirstNum << "*" << SecondNum << "=" << FirstNum * SecondNum;
	}
	else if (Method==47) {// /
		std::cout << FirstNum << "/" << SecondNum << "=" << FirstNum / SecondNum;// here is an integer division, how to output a common divid result
	}//output an "Error", if the method cannot match any operator you have offered.



	return 0;
}