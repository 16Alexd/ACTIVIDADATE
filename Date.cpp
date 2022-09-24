#include"Date.h"
#include <iostream>

Date::Date(int day, int month, int years)
{
	this->day = day;
	this->month = month;
	this->years = years;

	if (years % 4 != 0 || (years % 100 == 0 && years % 400 != 0)) {

		if (month <= 0 || month > 12) {
			if (month == 01 || month == 03 || month == 05 || month == 07 || month == 8)
			{

				if (day <= 0 || day >= 31)

					cout << "la fecha es invalida";
			}
			else if (month == 04 || month == 06 || month == 9 || month == 11)
			{
				if (day <= 0 || day >= 31)
				{

					cout << "la fecha es invalida ";

				}
			}
			else if (month == 02)
			{
				if (day <= 0 || day >= 28)
				{

				}

			}

			{



			}
			{

			}
			{

			}

		}
	}
	else
	{
		if (month <= 0 || month > 12) {
			if (month == 01 || month == 03 || month == 05 || month == 07 || month == 8)
			{

				if (day <= 0 || day >= 31)

					cout << "la fecha es invalida";
			}
			else if (month == 04 || month == 06 || month == 9 || month == 11)
			{
				if (day <= 0 || day >= 30)
				{

					cout << "la fecha es invalida ";

				}
			}
			else if (month == 02)
			{
				if (day <= 0 || day >= 28)
				{

				}

			}

			{



			}
			{

			}
			{

			}

		}


	}

}


