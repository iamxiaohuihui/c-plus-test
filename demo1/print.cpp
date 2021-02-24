#include "print.h"
#include <iostream>
using namespace std;

void print(int lenght, int* arr) {
	for (int i = 0; i < lenght; i++) {
		cout << arr[i];
	}
	cout << endl;
}

void print(int row, int line, int** arr) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}