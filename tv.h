#include <iostream>
#include <vector>
#include <date.h>

using namespace std;

class Tv
{
    string name;
    int time, price;
    Date start_date, end_date;
    vector<string> canals;

    friend Date;

public:
    Tv(string n, int t, Date sd, Date ed, int p, vector<string> c);

    string get_name();
    int get_time();
    Date get_start_date();
    Date get_end_date();
    int get_price();
    vector<string> get_canals();

    void set_name(string new_name);
    void set_time(int new_time);
    void set_start_date(Date new_start_date);
    void set_end_date(Date new_end_date);
    void set_price(int new_price);
    void set_canals(vector<string> canals);

    bool check_in_canals(string canal);
    void add_canal(string canal);
    void modify_elemnt(string canal, string new_canal);
    void remove_canal(string canal);
    int count_canals();
};