#include <iostream>
#include "tv.h"
#include "date.h"

using namespace std;

Tv::Tv(string n, int t, Date sd, Date ed, int p, vector<string> c)
{
    name = n;
    time = t;
    start_date = sd;
    end_date = ed;
    price = p;
    canals = c;
}

string Tv::get_name()
{
    return name;
}

int Tv::get_time()
{
    return time;
}

Date Tv::get_start_date()
{
    return start_date;
}

Date Tv::get_end_date()
{
    return end_date;
}

int Tv::get_price()
{
    return price;
}

// vector<string> Tv::get_canals()
// {
//     return canals;
// }

void Tv::set_name(string new_name)
{
    name = new_name;
}

void Tv::set_time(int new_time)
{
    time = new_time;
}

void Tv::set_start_date(Date new_start_date)
{
    start_date = new_start_date;
}

void Tv::set_end_date(Date new_end_date)
{
    end_date = new_end_date;
}

void Tv::set_price(int new_price)
{
    price = new_price;
}

// void Tv::set_canals(vector<string> new_canals)
// {
//     canals = new_canals;
// }

bool Tv::check_in_canals(string canal)
{
    bool result = false;
    for (int i = 1; i <= canals.size(); i++)
    {
        if (canals[i] == canal)
            result = true;
    }
    return result;
}

void Tv::add_canal(string new_canal)
{
    canals.push_back(new_canal);
}

void Tv::modify_elemnt(string canal, string new_canal)
{
    for (int i = 1; i <= canals.size(); i++)
    {
        if (canals[i] == canal)
            canals[i] = new_canal;
    }
}

void Tv::remove_canal(string canal)
{
    for (int i = 0; i <= canals.size(); i++)
    {
        if (canals[i] == canal)
            canals.erase(canals.begin() + i);
    }
}

int Tv::count_canals()
{
    return canals.size();
}
