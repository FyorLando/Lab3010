#include <ctime>
#include "DateTime.h"

bool IsLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
	{
		return true;
	}
	return false;
}

DateTime LaterInYear(DateTime d1, DateTime d2)
{
	if (d1.month > d2.month)
	{
		return d1;
	}
	else if (d2.month > d1.month)
	{
		return d2;
	}
	else
	{
		if (d1.day > d2.day)
		{
			return d1;
		}
		else
		{
			return d2;
		}
	}
}

int DaysInYear(int year)
{
	return IsLeapYear(year) ? 366 : 365;
}

int DaysInYearRange(int year1, int year2)
{
	int sum = 0;
	for (int i = year1; i <= year2; i++)
	{
		sum += IsLeapYear(i) ? 366 : 365;
	}
	return sum;
}

int main()
{

}
