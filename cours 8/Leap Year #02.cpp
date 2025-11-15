int ReadYear()
{
	int num;
	cout << "enter year : ";
	cin >> num;

	return num;
}


bool CheckLeapYear(int year)
{
	if (year % 400 == 0)
	{
		return true;
	}
	else if (year % 100 == 0)
	{
		return false;
	}
	else if (year % 4 == 0)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int year = ReadYear();
	if (CheckLeapYear(year))
	{
		cout << "yes it is a leap year";
	}
	else
		cout << "no it's not ! ";
