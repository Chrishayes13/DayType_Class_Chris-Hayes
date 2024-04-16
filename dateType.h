#pragma once
class dateType


    class dateType {
    private:
        int year;
        int month;
        int day;

    public:
        // Default constructor
        dateType(int y = 1900, int m = 1, int d = 1);

        // Parameterized constructor
        dateType(int y, int m, int d);

        // Setter and getter functions
        void setYear(int y);
        int getYear() const;
        void setMonth(int m);
        int getMonth() const;
        void setDay(int d);
        int getDay() const;

        // Check if the year is a leap year
        bool isLeapYear() const;

        // Get the number of days in the current month and year
        int getDaysInMonth() const;

        // Print the date in the format mm-dd-yyyy
        void print() const;

        // Get the number of days passed since the beginning of the year
        int getDaysPassedInYear() const;

        // Get the number of days remaining in the year
        int getDaysRemainingInYear() const;

        // Set the date to a future date using the number of days provided
        void setDateWithDaysOffset(int daysOffset);

        dateType() = default;

        bool operator==(const dateType& other) const
        {
            return false;
        }
};


{
};

