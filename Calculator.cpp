#include "Calculator.h"
#include <iostream>


void annulment::Сalculator::start() {
	int action;

	int a, b;

	double result;

	while (true) {
		std::cout << "Выберите действие:" << std::endl;
		std::cout << "1.Сложение" << std::endl;
		std::cout << "2.Разность" << std::endl;
		std::cout << "3.Умножение" << std::endl;
		std::cout << "4.Деление" << std::endl;
		std::cout << "5.Выход" << std::endl;

		std::cin >> action;

		if (action > 0 && action < 5) {
			std::cout << "Пожалуйста введите 1 число:" << std::endl;
			std::cin >> a;
			std::cout << "Пожалуйста введите 2 число:" << std::endl;
			std::cin >> b;
		}

		switch (action) {

		case 1:
			result = sum(a, b);
			break;

		case 2:
			result = difference(a, b);
			break;

		case 3:
			result = multiplication(a, b);
			break;

		case 4:
			result = division(a, b);
			break;

		case 5:
			return;
			break;

		default:
			std::cout << "Неизвестное действие" << std::endl;
			break;

		}

		if (action > 0 && action < 5) {
			std::cout << "Результат:" << result << std::endl;
		}

		system("pause");
		system("cls");

	}  
}     