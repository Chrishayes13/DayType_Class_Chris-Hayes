#include "dayType.h"
#include <iostream>

std::string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType(std::string day) : weekDay(day) {}

void dayType::print() const {
    std::cout << weekDay << std::endl;
}

std::string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (daysOfWeek[i] == weekDay) {
            return daysOfWeek[(i + 1) % 7];
        }
    }
    return "";
}

std::string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (daysOfWeek[i] == weekDay) {
            return daysOfWeek[(i - 1 + 7) % 7];
        }
    }
    return "";
}

void dayType::addDay(int nDays) {
    int index = 0;
    for (int i = 0; i < 7; i++) {
        if (daysOfWeek[i] == weekDay) {
            index = i;
            break;
        }
    }
    weekDay = daysOfWeek[(index + nDays) % 7];
}

void dayType::setDay(const std::string& d) {
    weekDay = d;
}

std::string dayType::getDay() const {
    return weekDay;
}
