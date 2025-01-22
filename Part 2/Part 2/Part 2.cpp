#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	cout << "Введите целое число\n";
	cin >> i;
	cout << "Вы ввели число " << i << ". Спасибо!" << endl;
	system("pause");
	return 0;
}