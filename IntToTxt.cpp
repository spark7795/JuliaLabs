// IntToTxt.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
#define filename "ints.txt"
FILE *f;
int main(int argc, char* argv[])
{
	
	if (argc == 11) {
		float mass1[10];
		int mass2[10];
		int i = 0;
		for (i = 1; i < 10; i++)
		{
			mass1[i] = (atof(argv[i]));
		}
		i = 0;
		memset(mass2, '_', 20);
		for (int j = 1; j < argc; j++) {
			if (mass1[j] == floor(mass1[j])) {
				mass2[i] = mass1[j];
				i++;
			}
		}
		for (int n = 0; n < (i-1); n++) { // i-1 потому что в прошлом цикле инкерментация происходит лишний раз
			cout << mass2[n] << " ";
		}
		ofstream outfile;
		FILE *f = fopen(filename, "w+");
		if (f == NULL) outfile.open(filename);
		for (int n = 0; n < (i-1); n++) fwrite(&mass2[n], sizeof(mass2), 1, f);
		system("pause");
	} 
	else {
		std::cout << "Введено неверное кол-во аргументов ( Введено: " << argc-1 << ". Необходимо: 10" << std::endl;
	}
    return 0; 
}

