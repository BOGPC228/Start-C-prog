#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float l, w, h, s;

    cout << "Вычисление площади поверхности параллелепипеда." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Длина (см) -> ";
    cin >> l;
    cout << "Ширина (см) -> ";
    cin >> w;
    cout << "Высота (см) -> ";
    cin >> h;

    s = 2 * (l * w + l * h + w * h);

    cout << "Площадь поверхности: " << s << " кв. см." << endl;

    system("pause");
    return 0;
}