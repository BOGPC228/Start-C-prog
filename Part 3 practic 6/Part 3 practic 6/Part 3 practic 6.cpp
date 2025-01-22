#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;  // Инициализация переменной для хранения факториала

    cout << "Enter a positive integer: ";  // Запрос ввода положительного целого числа
    cin >> n;  // Считывание числа

    if (n < 0) {  // Проверка, является ли число отрицательным
        cout << "Factorial of a negative number doesn't exist.";  // Сообщение об ошибке
    }
    else {
        for (int i = 1; i <= n; ++i) {  // Цикл for для вычисления факториала
            factorial *= i;  // Умножение текущего значения факториала на i
        }
        cout << "Factorial of " << n << " is " << factorial << endl;  // Вывод результата
    }

    return 0;
}