#pragma once
#include <fstream>
#include <stack>
#include "Binary.h"
#include "Decimal.h"
#include "Octal.h"
using namespace std;
class addition
{
private:
	char* number_a;//первое число
	char* number_b;//второе число
public:
	int flag;//флаг системы счисления
	Integer *a, *b, *rezult;
	addition(int input_mode, int &position);
	addition(unsigned long digit);//для ввода из файла
	~addition();
	char* generate_number(int lim);//генерирует число в нужной системе счисления
	char* convert(unsigned long digits, int radix);//преобразование в другую систему счисления
	unsigned long read_num(int &position);//прочитать строку из файла
	char* input(int flag);//проверка символов на корректность
	char* get_a();
	char* get_b();
	bool check(char*characters, int flag);
};