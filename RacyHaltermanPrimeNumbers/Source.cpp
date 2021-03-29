//Racy Halterman
//Data Structures
//Prime Numbers

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool checkprime(int input);

int main()
{
	ofstream data;
	data.open("Prime.txt");

	int max = 1000000;
	bool p = false;
	for (int i = 1; i < max + 1; i++)
	{
		p = checkprime(i);
		if (p == true)
		{
			data << i;//this is not working.
		}
	}
	data.close();
}

bool checkprime(int input)
{
	int x = (input/2) + 1;
	if (input <= 3)//1, 2, and 3 are prime numbers
	{
		return true;
	}

	for (int i = 2; i < x; i++)
	{
		if (input % i == 0)
		{
			return false;
		}
	}
	return true;
}
