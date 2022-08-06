﻿/******************************************************************************
*
* Абрамян М. Э.
* While 3. Даны целые положительные числа N и K. Используя только операции 
* сложения и вычитания, найти частное от деления нацело N на K, а также 
* остаток от этого деления.
*
*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int N = 14;
	int K = 5;
	int M = 0;

	while (N >= K) {
		N -= K;
		++M;
	}

	cout << "частное от деления нацело N на K равно "s << M << endl;
	cout << "остаток от этого деления равен "s << N << endl;
	return 0;
}