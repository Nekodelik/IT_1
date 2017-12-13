#include <conio.h>
#include "series.h"
using namespace std;
template <class Type>
int input(Type& k, int f)//ввод с проверкой на корректность
{
	ifstream my_inp("CON");
	switch (f)
	{
	case 1:
	{
		cout << "Выберите режим ввода (1-автоматически,2-вручную,3-считать из файла):";
		break;
	}
	case 2:
	{
		cout << "Введите количество обьектов: ";
		break;
	}
	case 3:
	{
		cout << "Введите номер элемента: ";
		break;
	}
	case 4:
	{
		cout << "========================================================" << endl;
		cout << "1 - вывести все элементы" << endl;
		cout << "2 - вывести определенный элемент" << endl;
		cout << "3 - подсчитать общую сумму всех результатов сложения десятичных значений" << endl;
		cout << "4 - вывести минимальый двоичный результат" << endl;
		cout << "5 - вывести максимальный восьмиричный результат" << endl;
		cout << "6 - записать результат работы программы в файл" << endl;
		cout << "7 - получить информацию о файлах" << endl;
		cout << "8 - выход из меню (все обьекты будут уничтожены)" << endl;
		cout << "========================================================" << endl;
		cout << "Выберите действие: ";
	}
	}
	cout.flush();
	my_inp >> k;
	switch (my_inp.rdstate())
	{
	case ios::goodbit: return 0;
	case ios::eofbit: return 0;
	case ios::failbit:
	case ios::badbit:
		cout << "Ошибка!! Не верный символ!" << endl;
		return 1;
	}
	return 1;
}
void Head(int &number, int &input_mode, int &kol)
{
	while (input(input_mode, 1));
	if (input_mode > 3)
		input_mode = 3;
	if (input_mode < 1)
		input_mode = 1;
	if (input_mode == 2 || input_mode == 3)
	{
		while (input(kol, 2));
	}
}
int main()
{
	int ESC = 27, temp, i = 0, input_mode, action, number, kol;
	bool repeat = true;
	do
	{
		temp = _getch();
	} while (temp != ESC);
	return 0;
}