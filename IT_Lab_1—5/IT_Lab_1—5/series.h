#pragma once
#include "addition.h"
using namespace std;
class series
{
private:
	int _kol;
public:
	bool flags[3];
	vector<addition*>vek;
	vector<Integer*>sum;//������������� ���������� ��������
	addition *temp;
	Integer *rez_sum_dec;//��������� ��������
	Integer *rez_min_bin;//����������� �������� �����
	Integer *rez_max_oct;//������������ ������������ �����
	series(int input_mode, int kol);
	~series();
	void show_all();
	void show_one(int i);
	void sum_dec();
	void min_bin();
	void max_oct();
	int file_size(FILE *stream);//������ ������ �����
	vector<string>file_name();//��������� ����� ���� ������ � ��������
	void file_time(TCHAR Buffer[]);//���� � ����� �������� �����
	void file_info();//���������� � ������
	void write_file();//������ ���������� � ����
	void read_file();//���������� �������� ������ �� �����
};