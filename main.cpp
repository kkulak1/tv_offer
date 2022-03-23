#include <iostream>
#include "date.h"
#include "tv.h"

using namespace std;

int main()
{
    Date start_date(1, 1, 2000);
    start_date.show();
    Date end_date(1, 1, 2010);

    vector<string> canals;
    canals.push_back("kanal 1");
    canals.push_back("kanal 2");

    Tv tv("offer", 1, start_date, end_date, 10000, canals);

    cout << tv.get_name() << endl;
    cout << tv.get_time() << endl;
    cout << tv.get_price() << endl;
}
