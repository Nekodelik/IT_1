#pragma once
#include "Integer.h"
class Decimal : public Integer
{
public:
	Decimal();
	Decimal(char* n);
	~Decimal();
	Integer* Add(Integer* rhs);
private:
	vector<char> decAddDec(vector<char>& lhs, vector<char>& rhs);
};