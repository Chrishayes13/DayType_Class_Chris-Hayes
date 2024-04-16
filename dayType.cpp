#include "dateType.h"
#include <iostream>

// Default constructor
dateType::dateType(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
    // Enforce class invariant
    enforceValidDate();
}

// Parameterized constructor
dateType::dateType(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
    // Enforce class invariant
    enforceValidDate();
}

// Setter and getter functions
void dateType::setYear(int y) {
    year = y;
    enforceValidDate();
}

int dateType::getYear() const {
    return year;
}

void dateType::setMonth(int m) {
    month = m;
    enforceValidDate();
}

int dateType::getMonth() const {
    return month;
}

void dateType::setDay(int d) {
    day = d;
    enforceValidDate();
}

int dateType::getDay() const {
    return day;
}

// Check if the year is a leap year
bool dateType::isLeapYear() const {
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

// Get the number of days in the current month and year
int dateType::getDaysInMonth() const {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear() && month == 2)
        return 29;
    else
        return daysInMonth[month - 1];
}

// Print the date in the format mm-dd-yyyy
void dateType::print() const {
    std::cout << month << "-" << day << "-" << year << std::endl;
}

// Get the number of days passed since the beginning of the year
int dateType::getDaysPassedInYear() const {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += (isLeapYear() && month > 2) ? 1 : 0;
    totalDays += day;
    return totalDays;
}

// Get the number of days remaining in the year
int dateType::getDaysRemainingInYear() const {
    int totalDays = isLeapYear() ? 366 : 365;
    return totalDays - getDaysPassedInYear();
}

// Set the date to a future date using the number of days provided
void dateType::setDateWithDaysOffset(int daysOffset) {
    int totalDays = getDaysPassedInYear() + daysOffset;
    year = getYear();
    int daysInYear = isLeapYear() ? 366 : 365;
    while (totalDays > daysInYear) {
        totalDays -= daysInYear;
        year++;
        daysInYear = isLeapYear() ? 366 : 365;
    }
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    month = 1;
    while (totalDays > daysInMonth[month - 1]) {
        totalDays -= daysInMonth[month - 1];
        month++;
        if (month == 13) {
            month = 1;
            year++;
        }
        if (isLeapYear() && month == 2)
            daysInMonth[1] = 29;
        else
            daysInMonth[1] = 28;
    }
    day = totalDays;
    enforceValidDate();
}

// Enforce class invariant
void dateType::enforceValidDate() {
    int maxDays = getDaysInMonth();
    if (day < 1) {
        day = 1;
    }
    else if (day > maxDays) {
        day = maxDays;
    }
    if (month < 1) {
        month = 1;
    }
    else if (month > 12) {
        month = 12;
    }
    if (year < 1900) {
        year = 1900;
    }
}