
#include <iostream>
#include <sstream>
using namespace std;
#include "Date.h"

int main()
{

	string date, day, month, years;
	cout << "ingrese alguna fecha por favor";
	cin >> date;
	stringstream input_stringstream(date);
	getline(input_stringstream, day, '/');
	getline(input_stringstream, month, '/');
	getline(input_stringstream, years, '/');

	cout << day << endl;
	cout << month << endl;
	cout << years << endl;

	int day1, month2, years3;
	day1 = stoi(day);
	month2 = stoi(month);
	years3 = stoi(years);


	Date fech (day1, month2, years3);
	


}




	



	