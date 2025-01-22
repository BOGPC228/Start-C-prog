#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <iostream> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float l, w, h;
	float s;
	cout << "Вычисление площади поверхности параллелепипеда" << endl;
	cout << "Введите исходные данные:" << endl << "Длина (см.) -> ";
	cin >> l;
	cout << "Ширина (см.) -> ";
	cin >> w;
	cout << "Высота (см.) -> ";
	cin >> h;
	s = 2 * (l * w + l * h + w * h );
	cout << endl << "Площади поверхности параллелепипеда: " << s <<  "кв.см.";
	cout << endl << "Для завершения нажмите <Enter>";
	getchar();

	system("pause");
	return 0;
}