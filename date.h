// Kamil Kulak

#include <iostream>

using namespace std;

class Date
{
    int day, month, year;
    enum Month
    {
        january = 1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december,
    };

public:
    Date(int d, int m, int r);

    void show();

    int get_day();
    int get_month();
    int get_year();

    void set_day(int new_day);
    void set_month(int new_month);
    void set_year(int new_year);

    void check(int day, int month, int year);
};