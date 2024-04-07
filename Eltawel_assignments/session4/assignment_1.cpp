#include <iostream>

class Date {
private:
    int d;
    int m;
    int y;

public:

    Date(int day, int month, int year) : d(day), m(month), y(year) {}


    void setDay(int day) 
    {
        d = day;
    }

    void setMonth(int month) 
    {
        m = month;
    }

    void setYear(int year) 
    {
        y = year;
    }

    int getDay()  
    {
        return d;
    }

    int getMonth()  
    {
        return m;
    }

    int getYear()  
    {
        return y;
    }


    bool CheckDay()  
    {
        return d >= 1 && d <= 31;
    }


    bool CheckMonth()  
    {
        return m >= 1 && m <= 12;
    }


    bool CheckYear()  
    {
        return y >= 0; 
    }
};

int main() {
    int day, month, year;
    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;

    Date date(day, month, year);

    if (date.CheckDay()) 
    {
        std::cout << "The day is valid." << std::endl;
    } else 
    {
        std::cout << "The day is not valid." << std::endl;
    }

    if (date.CheckMonth()) 
    {
        std::cout << "The month is valid." << std::endl;
    } 
    else 
    {
        std::cout << "The month is not valid." << std::endl;
    }

    if (date.CheckYear()) 
    {
        std::cout << "The year is valid." << std::endl;
    } 
    else 
    {
        std::cout << "The year is not valid." << std::endl;
    }

    return 0;
}
