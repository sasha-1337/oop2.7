#pragma once
#include "Goods.h"
class Date
{
private:
	int day, month, year;
	int N;
	Goods goods;
public:
	Date();
	Date(int, int, int, int);
	Date(Date&);
	~Date();
	Goods GetGoods() { return goods; }
	int GetDay() const { return day; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }
	int GetN() { return N; }
	void SetN(int N) { this->N = N; }

	void SetGoods(Goods goods) { this->goods = goods; }
	void SetDay(int day) { this->day = day; }
	void SetMonth(int month) { this->month = month; }
	void SetYear(int year) { this->year = year; }

	bool Init(Goods goods, int day, int month, int year);
	friend istream& operator >> (istream& in, Date*);
	friend ostream& operator << (ostream& out, Date*);
	string ToString(int value);
	void WorkWithDate(Date* d, int N);
	void AddDay(Date* d, int row, int value);
	void RemoveDay(Date* d, int row, int value);
	void PartOfDate(Date* d, int row);
	void ComparisonDate(Date* d, int row1, int row2);
	int Diff(Date* d, int row1, int row2);
	int ExpirationDate(Date* p, int row, int dday, int mmonth, int yyear);
};

