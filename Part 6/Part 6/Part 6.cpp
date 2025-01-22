#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    float l, w, h;
    float v;
    printf("\nВычисление объема параллелепипеда:\n");
    printf("\nВведите исходные данные:\n");

    printf("Длина (см.) -> ");
    scanf("%f", &l);

    printf("Ширина (см.) -> ");
    scanf("%f", &w);

    printf("Высота (см.) -> ");
    scanf("%f", &h);

    v = l * w * h;

    printf("Объем параллелепипеда: %куб. см.\n", v);
    printf("\n\nДля завершения нажмите <Enter>");
    getchar();
    return 0;

}