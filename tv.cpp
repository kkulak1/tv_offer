#include <iostream>
#include "tv.h"
#include "date.h"

using namespace std;

Tv::Tv(string n, int t, Date sd, Date ed, int p, vector<string> c)
{
    // name = n;
    // time = t;
    start_date = sd;
    end_date = ed;
    // price = p;
    // canals = c;
    set_name(n);
    set_time(t);
    set_price(p);
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

void Tv::set_name(string new_name)
{
    name = new_name;
}

void Tv::set_time(int new_time)
{
    if (new_time <= 0)
    {
        throw invalid_argument("Time has to be positive!");
    }
    else
    {
        time = new_time;
    }
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
    if (new_price <= 0)
    {
        throw invalid_argument("Price has to be bigger than 0!");
    }
    else
    {
        price = new_price;
    }
}

bool Tv::check_in_canals(string canal)
{
    // bool result = false;
    int size;
    size = canals.size();
    for (int i = 0; i < size; i++)
    {
        if (canals[i] == canal)
            return true;
    }
    return false;
}

void Tv::add_canal(string new_canal)
{
    int size = canals.size();
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (canals[i] == new_canal)
        {
            check++;
        }
    }
    if (check > 0)
        throw invalid_argument("This canal is already there!");
    else
        canals.push_back(new_canal);
}

void Tv::modify_elemnt(string canal_to_modify, string new_canal)
{
    int size, x = -1;
    size = canals.size();
    for (int i = 1; i < size; i++)
    {
        if (canals[i] == canal_to_modify)
        {
            x = i;
        }
    }
    if (x == -1)
    {
        throw invalid_argument("There is no such element in collection to modify it!");
    }
    else
    {
        canals[x] = new_canal;
    }
}

void Tv::remove_canal(string canal)
{
    int size, x = 0;
    size = canals.size();
    for (int i = 0; i < size; i++)
    {
        if (canals[i] == canal)
        {
            canals.erase(canals.begin() + i);
            x = 1;
        }
    }
    if (x == 0)
    {
        throw invalid_argument("There is no such element in collection to remove it!");
    }
}

int Tv::count_canals()
{
    return canals.size();
}
