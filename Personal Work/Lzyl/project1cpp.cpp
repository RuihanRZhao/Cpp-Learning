#include <iostream>


int main() {
	int English = 0, Mathematics = 0, Economy = 0, Physics = 0, PE = 0;
	std::cin >> English >> Mathematics >> Economy >> Physics >> PE;
	//English
	if (English<=100 && English>=81) {
		std::cout << "English: A\n";
	}
	else if (English <= 80 && English >= 71) {
		std::cout << "English: B\n";
	}
	else if (English <= 70 && English >= 61) {
		std::cout << "English: C\n";
	}
	else if(English  <= 60 && English >= 0) {
		std::cout << "English: D\n";
	}
	else {
		std::cout << "English: Beyond the scope of number.\n";
	}
	//Mathematics
	if (Mathematics <= 100 && Mathematics>= 81) {
		std::cout << "Mathematics: A\n";
	}
	else if (Mathematics <= 80 && Mathematics >= 71) {
		std::cout << "Mathematics: B\n";
	}
	else if (Mathematics <= 70 && Mathematics >= 61) {
		std::cout << "Mathematics: C\n";
	}
	else if (Mathematics <= 60 && Mathematics >= 0) {
		std::cout << "Mathematics: D\n";
	}
	else {
		std::cout << "Mathematics: Beyond the scope of number.\n";
	}
	//Economy
	if (Economy <= 100 && Economy >= 81) {
		std::cout << "Economy: A\n";
	}
	else if (Economy <= 80 && Economy >= 71) {
		std::cout << "Economy: B\n";
	}
	else if (Economy <= 70 && Economy >= 61) {
		std::cout << "Economy: C\n";
	}
	else if (Economy <= 60 && Economy >= 0) {
		std::cout << "Economy: D\n";
	}
	else {
		std::cout << "Economy: Beyond the scope of number.\n";
	}
	//Physics
	if (Physics <= 100 && Physics >= 81) {
		std::cout << "Physics: A\n";
	}
	else if (Physics <= 80 && Physics >= 71) {
		std::cout << "Physics: B\n";
	}
	else if (Physics <= 70 && Physics >= 61) {
		std::cout << "Physics: C\n";
	}
	else if (Physics <= 60 && Physics >= 0) {
		std::cout << "Physics: D\n";
	}
	else {
		std::cout << "Physics: Beyond the scope of number.\n";
	}
	//PE
	if (PE <= 100 && PE >= 81) {
		std::cout << "PE: A\n";
	}
	else if (PE <= 80 && PE >= 71) {
		std::cout << "PE: B\n";
	}
	else if (PE <= 70 && PE >= 61) {
		std::cout << "PE: C\n";
	}
	else if (PE <= 60 && PE >= 0) {
		std::cout << "PE: D\n";
	}
	else {
		std::cout << "PE: Beyond the scope of number.\n";
	}
	return 0;
}