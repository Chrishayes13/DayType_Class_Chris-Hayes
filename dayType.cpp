#include <iostream>
#include "dayType.h"

string dayType::dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday" };

void dayType::setDay(string aDay)
{
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        if (dayOfWeek[i] == aDay)
        {
            index = i;
            break;
        }
    }
    day = dayOfWeek[index];
}

void dayType::print() const
{
    cout << day << endl;
}

dayType::dayType(string start)
{
    setDay(start);
}

