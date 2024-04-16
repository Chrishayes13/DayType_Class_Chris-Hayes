#include "dayType.h"
#include "dayType.h"
#include <iostream>
#include <iostream>

int main() {
    // 1. Create a day object using the default constructor and use the print function to display the instance variable.
    dayType day1;
    std::cout << "Default day: ";
    day1.print();

    // 2. Call prevDay() and print.
    std::cout << "Previous day: " << day1.prevDay() << std::endl;

    // 3. Call nextDay() and print.
    std::cout << "Next day: " << day1.nextDay() << std::endl;

    // 4. Create a day object using the constructor with parameters and initialize the object to “Monday”.
    dayType day2("Monday");

    // 5. Use getDay() to display the value of the instance variable.
    std::cout << "Set to: " << day2.getDay() << std::endl;

    // 6. Using the second object, call addDays(3) and display the return value.
    day2.addDay(3);
    std::cout << "After adding 3 days: " << day2.getDay() << std::endl;

    // 7. Use the second object to call addDays(5) and display the return value.
    day2.addDay(5);
    std::cout << "After adding 5 days: " << day2.getDay() << std::endl;

    return 0;
}