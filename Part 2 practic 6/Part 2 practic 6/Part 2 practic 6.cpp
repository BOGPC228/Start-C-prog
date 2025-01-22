#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";  // Запрос ввода количества членов ряда
    cin >> n;  // Считывание количества членов ряда

    for (int i = 1; i <= n; ++i) {  // Цикл for для перебора членов ряда от 1 до n
        sum += 1.0 / i;  // Добавление очередного члена ряда к сумме
    }

    cout << "Sum of the first " << n << " terms is: " << sum << endl;  // Вывод результата

    return 0;
}