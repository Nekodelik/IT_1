#pragma once
#include <time.h>
#include <vector>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include<string>
using namespace std;

class Integer
{
	friend ostream& operator <<(ostream& stream, const Integer& rhs);
public:
	vector<char> digits;
	virtual Integer* Add(Integer *rhs) = 0;//���������� (����� �����������)
	int convert(char digit);//�������������� �� char � int
	Integer();
	Integer(char* n);
	virtual ~Integer();
	int getsize();//���������� ������ ������� digits
protected:
};