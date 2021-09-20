#include"Header.h"
int main(int argc, char* argv[])
{
	setlocale(0, "ru");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	const int size1 = 4;
	int array1[size1][size1];
	int b = 0;
	int vrem1 = 0;
	int zap1 = 0;
	int rand11 = 0;
	int rand21 = 0;
	int vrem1 = 0;
	int knopka1 = 0;
	int abb = 1;
	cout << "W - вверх" << endl << "S -вниз" << endl << "D -вправо" << endl << "A -влево" << endl;
	createarray(size1, array1[size1][size1], b);
	PrintArray(size1, array1[size1][size1]);
	Sortirovka(rand11, rand21, size1, vrem1);
	knopka1 = _getch();
	for (int sss = 0; sss > abb;) {
		Pobeda(array1[3][3]);
		else {
			for (int i = 0; i < size1; i++) {
				for (int j = 0; j < size1; i++) {
					KnopkaHod(i, j, knopka1, zap1, array1[i][j]);
					system("cls");
					PrintArray(size1, array1[size1][size1]);
					knopka1 = _getch();
				}
			}
		}
	}
	system("pause");
}