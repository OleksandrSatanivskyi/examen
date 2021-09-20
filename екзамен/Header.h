#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
using namespace std;



void createarray(const int size = 4, int array[size][size], int a = 0);
void PrintArray(const int size = 4, int array[size][size]);
void Sortirovka(int rand1 = 0, int rand2 = 0, const int size=4, int vrem = 0);
void KnopkaHod(int i, int j, int knopka, int zap, int array[i][j]);
void Pobeda(int array[3][3]);


