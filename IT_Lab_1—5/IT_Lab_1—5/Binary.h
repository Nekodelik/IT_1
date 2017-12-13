#pragma once
#include "Integer.h"
class Binary : public Integer
{
public:
	Binary();
	Binary(char* n);
	~Binary();
	Integer* Add(Integer* rhs);
private:
	vector<char> binAddBin(vector<char> &lhs, vector<char> &rhs);
};