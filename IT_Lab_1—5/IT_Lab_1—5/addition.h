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
	char* number_a;//������ �����
	char* number_b;//������ �����
public:
	int flag;//���� ������� ���������
	Integer *a, *b, *rezult;
	addition(int input_mode, int &position);
	addition(unsigned long digit);//��� ����� �� �����
	~addition();
	char* generate_number(int lim);//���������� ����� � ������ ������� ���������
	char* convert(unsigned long digits, int radix);//�������������� � ������ ������� ���������
	unsigned long read_num(int &position);//��������� ������ �� �����
	char* input(int flag);//�������� �������� �� ������������
	char* get_a();
	char* get_b();
	bool check(char*characters, int flag);
};