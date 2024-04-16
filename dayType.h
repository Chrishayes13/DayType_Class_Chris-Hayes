#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>


class dayType {
private:
    std::string weekDay;
    static std::string daysOfWeek[7];

public:
    // Constructors
    dayType(std::string day = "Sunday");

    // Member functions
    void print() const;
    std::string nextDay() const;
    std::string prevDay() const;
    void addDay(int nDays);
    void setDay(const std::string& d);
    std::string getDay() const;
};

#endif // DAYTYPE_Hy;

;


