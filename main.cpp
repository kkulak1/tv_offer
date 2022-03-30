#include <iostream>
#include <sstream>
#include "date.h"
#include "tv.h"

using namespace std;

int main(int argc, char *argv[])
{

    if (argc < 10)
    {
        cerr << "Incorrect number of command line arguments - the minimum is 10, got " << argc << endl;
    }

    string name;
    int time = 1, price = 1000, sday = 1, smonth = 1, syear = 2000, eday = 1, emonth = 1, eyear = 2001;
    vector<string> canals;

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

    if (argc > 10)
    {
        for (int i = 1; i < (argc - 9); i++)
        {
            stringstream ss;
            ss.str(argv[9 + i]);
            canals.push_back(ss.str());
            ss.clear();
        }
    }

    Date start_date(sday, smonth, syear);
    Date end_date(eday, emonth, eyear);

    Tv offer(name, time, start_date, end_date, price, canals);

    cout << "Name: " << offer.get_name() << endl;
    cout << "Time (years): " << offer.get_time() << endl;
    cout << "Start date: " << offer.get_start_date().get_day() << "." << offer.get_start_date().get_month() << "." << offer.get_start_date().get_year() << endl;
    cout << "End date: " << offer.get_end_date().get_day() << "." << offer.get_end_date().get_month() << "." << offer.get_end_date().get_year() << endl;
    cout << "Price: " << offer.get_price() << endl;

    int size = canals.size();

    if (canals.size() > 0)
    {
        cout << "Canals: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << canals[i] << endl;
        }
    }

    return 0;
}
