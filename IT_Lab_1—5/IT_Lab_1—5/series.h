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
	vector<Integer*>sum;//промежуточные результаты сложения
	addition *temp;
	Integer *rez_sum_dec;//результат сложения
	Integer *rez_min_bin;//минимальное двоичное число
	Integer *rez_max_oct;//максимальное восьмиричное число
	series(int input_mode, int kol);
	~series();
	void show_all();
	void show_one(int i);
	void sum_dec();
	void min_bin();
	void max_oct();
	int file_size(FILE *stream);//узнать размер файла
	vector<string>file_name();//оределяет имена всех файлов в каталоге
	void file_time(TCHAR Buffer[]);//дата и время создания файла
	void file_info();//информация о файлах
	void write_file();//запись результата в файл
	void read_file();//считывание исходных данных из файла
};