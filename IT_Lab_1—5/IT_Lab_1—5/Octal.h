#pragma once
#include "Integer.h"
class Octal : public Integer
{
public:
	Octal();
	Octal(char* n);
	~Octal();
	Integer* Add(Integer* rhs);
private:
	vector<char> octAddoct(vector<char>& lhs, vector<char>& rhs);
};