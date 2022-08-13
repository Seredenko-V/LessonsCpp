﻿/******************************************************************************
*
* Абрамян М. Э.
* While 12. Дано целое число N (> 1). Вывести наибольшее из целых чисел K, для 
* которых сумма 1 + 2 + … + K будет меньше или равна N, и саму эту сумму.
*
*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int N = 21;
	if (N < 1) {
		cout << "N не является положительным"s << endl;
		return 0;
	}
	int K = 0;
	int sum = 0;
	while (sum + K + 1 <= N) {
		sum += ++K;
	}
	cout << "K = "s << K << endl;
	cout << "Сумма = "s << sum << endl;
	return 0;
}