#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <iostream>

int main(int argc, char* argv[])
{
    double Xn, Xk, dX, t, y;
    printf("Enter Xn, Xk, dX, t\n");  // Запрос ввода начального значения, конечного значения, шага и параметра t
    scanf("%lf %lf %lf %lf", &Xn, &Xk, &dX, &t);  // Считывание введенных значений
    printf("......\n");
    printf("| X | Y |\n");  // Заголовок таблицы
    printf("......\n");
    double x = Xn;  // Инициализация переменной x начальным значением Xn
    while (x <= Xk)  // Цикл while, выполняющийся пока x не превысит Xk
    {
        if (x < 0)  // Если x меньше 0, y = t
            y = t;
        if (x >= 0 && x < 10)  // Если x в диапазоне [0, 10), y = t * x
            y = t * x;
        if (x >= 10)  // Если x больше или равно 10, y = 2 * t
            y = 2 * t;

        if (t > 100)  // Если t > 100, выводим y как целое число
            printf("%9.2lf |%9d |\n", x, (int)y);
        else  // Иначе выводим y как вещественное число
            printf("%9.2lf |%9.2lf |\n", x, y);
        x += dX;  // Увеличение x на шаг dX
    }
    printf("......\n");
    system("pause");
    return 0;
}