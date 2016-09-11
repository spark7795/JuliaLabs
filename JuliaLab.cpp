// JuliaConsole.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ctime>


int main(int argc, char* argv[])
{
	if (argc = 3) {
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int ** arr = new int *[num1];
		srand(time(NULL));
		for (int i = 0; i < num1; i++)
		{
			arr[i] = new int[num2];
			for (int j = 0; j < num2; j++)
				std::cout << std::setfill(' ') << std::setw(2) << (arr[i][j] = (rand()%20)) << " ";
			std::cout << "\n";
		}

	} 
	else {
		std::cout << "Введено неверное кол-во аргументов ( Введено: " << argc << ". Необходимо: 3" << std::endl;
		std::system("pause");
	}

	return 0;

}

