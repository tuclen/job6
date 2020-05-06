#include <iostream>
using namespace std;

int main ()
{
	string name;
	cout << "Enter worker's name: ";
	cin >> name;

	int year;
	cout << "Enter worker's experience: ";
	cin >> year;
	
	int wag;
	cout << "Enter worker's hourly wag: ";
	cin >> wag;
	
	int hour;
	cout << "Enter how much hours Denis has worked: ";
	cin >> hour;
	
	int salary;
	salary = wag * hour;
	
	int premy;
	
	if (year <= 1)
		premy = 0 * salary;
	else 
		if (year <= 3)
			premy = (5 * salary)/100;
		else 
			if (year <=5)
				premy = (8 * salary)/100;
			else
				premy = (15 * salary)/100;
	cout << name << endl;
	cout << "Experience is " << year << endl;
	cout << "Hourly wage is " << wag << endl;
	cout << name << " has worked " << hour << " hours"<< endl;
	cout << "Salary is " << salary << endl;
	cout << "Premy is " << premy << endl; 
	

	return 0;
}
