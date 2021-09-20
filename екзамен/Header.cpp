#include"Header.h"
void createarray(const int size = 4, int array[size][size], int a = 0) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			array[i][j] = ++a;
		}
	}
	array[3][3] = 0;
}
void PrintArray(const int size = 4, int array[size][size]) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; i++) {
			cout << setw(3) << array[i][j];
		}
		cout << endl;
	}
}
void Sortirovka(int rand1=0, int rand2=0, const int size=4, int vrem=0) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; i++) {
			rand1 = rand() % 4 + 0;
			rand2 = rand() % 4 + 0;
			vrem = array[i][j];
			array[i][j] = array[rand1][rand2];
			array[rand1][rand2] = vrem;
		}
	}
}
void KnopkaHod(int i, int j, int knopka, int zap, int array[i][j]) {
	if (array[i][j] == 0) {
		switch (knopka) {
		case 119:
			if (i != 0) {
				array[i][j] = zap;
				array[i][j] = array[i - 1][j];
				array[i - 1][j] = zap;
			}break;
			if (i == 0) {

			}break;
		case 115:
			if (i != 3) {
				array[i][j] = zap;
				array[i][j] = array[i + 1][j];
				array[i + 1][j] = zap;
			}break;
			if (i == 3) {

			}break;
		case 100:
			if (j != 3) {
				array[i][j] = zap;
				array[i][j] = array[i][j + 1];
				array[i][j + 1] = zap;
			}break;
			if (j == 3) {

			}break;
		case 97:
			if (j != 0) {
				array[i][j] = zap;
				array[i][j] = array[i][j - 1];
				array[i][j - 1] = zap;
			}break;
			if (j == 0) {

			}break;
		}
	}

	else {

	}
}
void Pobeda(int array[3][3]) {
	if (array[0][0] == 1 && array[0][1] == 2 && array[0][2] == 3 && array[0][3] == 4 && array[1][0] == 5 && array[1][1] == 6 && array[1][2] == 7 && array[1][3] == 8 && array[2][0] == 9 && array[2][1] == 10 && array[2][2] == 11 && array[2][3] == 12 && array[3][0] == 13 && array[3][1] == 14 && array[3][2] == 15 && array[3][3] == 0) {
		cout << "Вы победили!!!" << endl;
		system("pause");
	}
}



