#include<iostream>

enum goods {STAR, FIR, CRSM_BALL, GARLAND};

int main() {
	bool isRun = true;
	double price[4] = { 3.99, 5.99, 1.99, 15.99 };
	double sum = 0;

	while (isRun) {
		int goodsCode = 0;
		int amount = 0;

		std::cout << STAR << " - Star  \t\t" << price[STAR] << "$" << std::endl;
		std::cout << FIR << " - Fir  \t\t" << price[FIR] << "$" << std::endl;
		std::cout << CRSM_BALL << " - Cristmass tree  \t" << price[CRSM_BALL] << "$" << std::endl;
		std::cout << GARLAND << " - Garland  \t\t" << price[GARLAND] << "$" << std::endl;

		if (sum != 0) {
			std::cout << "Current sum = " << sum << "$" << std::endl;
		}

		std::cout << "Enter goods code: ";
		std::cin >> goodsCode;
		std::cout << "Enter amount: ";
		std::cin >> amount;

		sum += (price[goodsCode] * amount);

		if (sum != 0) {
			std::cout << "New sum = " << sum << "$" << std::endl;
		}

		char yesNo;

		std::cout << "Do you want buy another goods? (y/n): ";
		std::cin >> yesNo;

		if (yesNo == 'n') {
			isRun = false;
			std::cout << "sum = " << sum;
		}
		else {
			system("cls");
		}
	}
}