
#include <string>
#include "dayType.h"
#include <iostream>
using namespace std;

int main()
{

	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;

	dayType::dayOfWeek[0] = "Sun";
	dayType::dayOfWeek[1] = "Mon";
	dayType::dayOfWeek[2] = "Tue";
	dayType::dayOfWeek[3] = "Wed";
	dayType::dayOfWeek[4] = "Thu";
	dayType::dayOfWeek[5] = "Fri";
	dayType::dayOfWeek[6] = "Sat";

	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;


	dayType day;
	day.print();
}


