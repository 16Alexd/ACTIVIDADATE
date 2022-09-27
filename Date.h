#pragma once
#include <string>
using namespace std;
class Date
{
private:
	string date;

	int month;
	int years;
	int day;

public:
	Date(int day, int month, int years);
	bool y();
	bool m();
	bool d();

	void checarfech(bool day, bool moth, bool year);
	Date& operator ++ ();
	void AddDays(int nDaysToAdd);
	void AddMonths(int nMonthsToAdd);
	void AddYears(int m_nYearsToAdd);
	void showDate();
};


