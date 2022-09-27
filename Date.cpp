#include"Date.h"
#include <iostream>

Date::Date(int day, int month, int years)
{
	this->day = day;
	this->month = month;
	this->years = years;
	checarfech(d(), m(), y());

	

}

bool Date::y()
{   
	bool alexa = false;
	if ((years % 4 != 0 || (years % 100 == 0 && years % 400 != 0)))
	{
		alexa = true;
	}
	return alexa;
}

bool Date::m()
{
	bool alexa = false;
	if (month >=1 || month <= 12)
	{
		alexa = true;
	}
	return alexa;
}

bool Date::d()
{
	bool alexa = false;
	if (day >= 1 || day <= 30)
	{
		alexa = true;
	}
	return alexa;
}

void Date::checarfech(bool days, bool months, bool yea)
{
	if (days == true && months == true && yea == true)
	{
		cout << "fecha valida\n";

	}else {
		cout << "fecha invalida";
	}
}   
Date& Date::operator++()
{
	
	AddDays(1);
	return *this;
}

void Date::AddDays(int nDaysToAdd)
{
	day += nDaysToAdd;
	if (day > 31)
	{
		AddMonths(day / 31);

		day %= 31; 
	}
}

void Date::AddMonths(int nMonthsToAdd)
{
	month += nMonthsToAdd;

	if (month > 12)
	{
		AddYears(month / 12);

		month %= 12;
	}
}

void Date::AddYears(int m_nYearsToAdd)
{
	years += m_nYearsToAdd;
}
void Date::showDate()
{
	cout << "La fecha es: " << day << "/" << month << "/" << years << "\n";
}





