#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <iostream>
using namespace std;

int main()
{
	float l, w;
	// длина и ширина прямоугольника 
	float s;// площадь прямоугольника 
	cout << "Вычисление площади прямоугольника" << endl;
	cout << "Введите исходные данные:" << endl << "Длина (см.) -> ";
	cin >> l;
	cout << "Ширина (см.) -> ";
	cin >> w;
	s = l * w;
	cout << endl << "Площадь прямоугольника: " << s << "кв.см.";
	cout << endl << "Для завершения нажмите <Enter>";
	getchar();
	return 0;
}