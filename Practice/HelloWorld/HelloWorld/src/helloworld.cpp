#include <iostream>


int main() {
	int English = 0, Mathematics = 0, Economy = 0, Physics = 0, PE = 0, Subject = 0;
	std::cin >> English >> Mathematics >> Economy >> Physics >> PE;
	//English
	Subject = English;
	std::cout << "English: \t";
	if (Subject <= 100 && Subject >= 81) { std::cout << "A"; }
	else if (Subject <= 80 && Subject >= 71) { std::cout << "B"; }
	else if (Subject <= 70 && Subject >= 61) { std::cout << "C"; }
	else if (Subject <= 60 && Subject >= 0) { std::cout << "D"; }
	else { std::cout << "Beyond the scope of number."; }
	std::cout << "\tMark:" << Subject << "\n";
	//Mathematics
	Subject = Mathematics;
	std::cout << "Mathematics: \t";
	if (Subject <= 100 && Subject >= 81) { std::cout << "A\n"; }
	else if (Subject <= 80 && Subject >= 71) { std::cout << "B\n"; }
	else if (Subject <= 70 && Subject >= 61) { std::cout << "C\n"; }
	else if (Subject <= 60 && Subject >= 0) { std::cout << "D\n"; }
	else { std::cout << "Beyond the scope of number.\n"; }
	std::cout << "\tMark:" << Subject << "\n";
	//Economy
	Subject = Economy;
	std::cout << "Economy: \t";
	if (Subject <= 100 && Subject >= 81) { std::cout << "A"; }
	else if (Subject <= 80 && Subject >= 71) { std::cout << "B"; }
	else if (Subject <= 70 && Subject >= 61) { std::cout << "C"; }
	else if (Subject <= 60 && Subject >= 0) { std::cout << "D"; }
	else { std::cout << "Beyond the scope of number."; }
	std::cout << "\tMark:" << Subject << "\n";
	//Physics
	Subject = Physics;
	std::cout << "Physics: \t";
	if (Subject <= 100 && Subject >= 81) { std::cout << "A"; }
	else if (Subject <= 80 && Subject >= 71) { std::cout << "B"; }
	else if (Subject <= 70 && Subject >= 61) { std::cout << "C"; }
	else if (Subject <= 60 && Subject >= 0) { std::cout << "D"; }
	else { std::cout << "Beyond the scope of number."; }
	std::cout << "\tMark:" << Subject << "\n";
	//PE
	Subject = PE;
	std::cout << "PE: \t\t";
	if (Subject <= 100 && Subject >= 81) { std::cout << "A"; }
	else if (Subject <= 80 && Subject >= 71) { std::cout << "B"; }
	else if (Subject <= 70 && Subject >= 61) { std::cout << "C"; }
	else if (Subject <= 60 && Subject >= 0) { std::cout << "D"; }
	else { std::cout << "Beyond the scope of number."; }
	std::cout << "\tMark:" << Subject << "\n";
	return 0;
}