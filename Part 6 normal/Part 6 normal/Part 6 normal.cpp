#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float l, w, h, v;

    cout << "Вычисление объема параллелепипеда." << endl; //cout-Вывод в консоль << "Вычисление объема параллелепипеда." << endl- символ перехода текста на новую строку
    cout << "Введите исходные данные:" << endl;
    cout << "Длина (см) -> ";
    cin >> l;//cin - ввод данных с клавы
    cout << "Ширина (см) -> ";
    cin >> w;
    cout << "Высота (см) -> ";
    cin >> h;
    
    v = l * w * h;

    cout << "Объем: " << v << " куб. см." << endl;

    system("pause");
    return 0;
}