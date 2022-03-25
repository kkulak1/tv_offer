#include <iostream>
#include <sstream>
#include "date.h"
#include "tv.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Date start_date(1, 1, 2000);
    // start_date.show();
    // Date end_date(1, 1, 2010);

    // vector<string> canals;
    // canals.push_back("kanal 1");
    // canals.push_back("kanal 2");

    // Tv tv("offer", 1, start_date, end_date, 10000, canals);

    // cout << tv.get_name() << endl;
    // cout << tv.get_time() << endl;
    // cout << tv.get_price() << endl;
    // int size;
    // size = canals.size();
    // cout << size;
    // cout << tv.count_canals() << endl;
    // cout << tv.check_in_canals("kanal 1") << endl;
    // tv.remove_canal("kanal 1");
    // cout << tv.count_canals() << endl;
    // // for (int i; i <= size; i++)
    // // {
    // //     cout << canals[i] << endl;
    // // }

    if (argc != 10)
    {
        cerr << "Incorrect number of command line arguments - expected 10, got " << argc << endl;
    }

    string name;
    int time = 1, price = 1000, sday = 1, smonth = 1, syear = 2000, eday = 1, emonth = 1, eyear = 2001;
    vector<string> canals;

    // cin >> name, time, sday, smonth, syear, eday, emonth, eyear, price, canals;

    stringstream stream;

    stream << argv[1];
    stream >> name;
    stream.clear();

    stream << argv[2];
    stream >> time;
    stream.clear();

    stream << argv[3];
    stream >> sday;
    stream.clear();

    stream << argv[4];
    stream >> smonth;
    stream.clear();

    stream << argv[5];
    stream >> syear;
    stream.clear();

    stream << argv[6];
    stream >> eday;
    stream.clear();

    stream << argv[7];
    stream >> emonth;
    stream.clear();

    stream << argv[8];
    stream >> eyear;
    stream.clear();

    stream << argv[9];
    stream >> price;
    stream.clear();

    Date start_date(sday, smonth, syear);
    Date end_date(eday, emonth, eyear);

    Tv offer(name, time, start_date, end_date, price, canals);

    cout << offer.get_name() << endl;
    cout << offer.get_time() << endl;
}
