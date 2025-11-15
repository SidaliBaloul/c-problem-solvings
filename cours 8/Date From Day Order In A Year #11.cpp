struct sDate
{
	int year;
	int month;
	int day;
};
int ReadYear()
{
	int num;
	cout << "please enter the year : ";
	cin >> num;

	return num;
}
int ReadMonth()
{
	int num;
	do
	{
		cout << "please enter a month : ";
		cin >> num;

	} while (num < 1 || num > 12);

	return num;
}
int ReadDay()
{
	int day;
	do
	{
		cout << "Please enter a day ? ";
		cin >> day;
	} while (day < 1 || day > 31);

	return day;
}

bool IsLeapYear(int year)
{
	return ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)));
}

int NumberOfDaysInMonth(int year, int month)
{

	short arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return ((month == 2) ? (IsLeapYear(year) ? 29 : 28) : arr[month - 1]);

}

int NumberOfDaysFromTheBeginingOfTheYear(int year,int month,int day)
{
	int totaldays = 0;

	for (int i = 1; i < month; i++)
	{
		totaldays += NumberOfDaysInMonth(year, i);
	}

	totaldays += day;

	return totaldays;
}
sDate GetDate(int totaldays,int year)
{
	sDate date;
	int i = 1;
	date.month = 1;
	date.year = year;
	short dmonths = 0;
	while (true)
	{
		dmonths = NumberOfDaysInMonth(year, date.month);

		if (totaldays > dmonths)
		{
			totaldays -= dmonths;
			date.month++;
		}
		else
		{
			date.day = totaldays;
			break;
		}
		
	}
	
	return date;
}

int main()
{
	int year = ReadYear();
	int month = ReadMonth();
	int day = ReadDay();
	int totaldays = NumberOfDaysFromTheBeginingOfTheYear(year, month, day);
	cout << "number of days from the begining of the year is " << totaldays << endl;

	sDate date;
	date = GetDate(totaldays, year);
	cout << "Date for [" << totaldays << "] is : ";
	cout << date.day << "/" << date.month << "/" << date.year << endl;
