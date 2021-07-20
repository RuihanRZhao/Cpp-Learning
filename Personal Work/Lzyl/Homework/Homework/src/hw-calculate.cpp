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
		std::cout << FirstNum << "/" << SecondNum << "=" << FirstNum / SecondNum;
	}



	return 0;
}