int ReadNumber()
{
	int num;
	cout << "enter the number : ";
	cin >> num;

	return num;
}

string NumberToText(int num)
{
	if (num == 0)
	{
		return "";
	}

	if (num >= 1 && num <= 19)
	{
		string arr[] = { "","one","two","three","four","five","six","seven","eight","nine"
		"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
		return arr[num] + " ";
	}

	if (num >= 20 && num <= 99)
	{
		string arr[] = { "","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
		return arr[num / 10] + " " + NumberToText(num % 10);
	}

	if (num >= 100 && num <= 199)
	{
		return "one hundred " + NumberToText(num % 100);
	}

	if (num >= 200 && num <= 999)
	{
		return NumberToText(num / 100) + "hundred " + NumberToText(num % 100);
	}

	if (num >= 1000 && num <= 999999)
	{
		return NumberToText(num / 1000) + "thousand " + NumberToText(num % 1000);
	}

	if (num >= 1000000 && num <= 999999999)
	{
		return NumberToText(num / 1000000) + "million " + NumberToText(num % 1000000);
	}
}


int main()
{
	
	int number = ReadNumber();
	cout << NumberToText(number);
