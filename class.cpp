#include <iostream>
#include <cstring>
using namespace std;

class BirthDate
{
public:
	int year;
	int month;
	int day;

	void print()
	{
		cout << month << "/" << day << "/" << year;
	}

	void set(int d, int m, int y)
	{
		year = y;
		month = m;
		day = d;
	}
};

int main()
{
	BirthDate bob;


	cout << "Enter the Bobs birthday day: ";
	cin >> bob.day;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob.year;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob.month;

	cout << "Bob's birthday is ";
	bob.pritn();
	cout << endl;

	BirthDate tom;
	tom.set(20, 5 , 1984);
	cout << "Tom's birthday is ";
	tom.print();

	return 0;




}