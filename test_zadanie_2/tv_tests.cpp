// #include <iostream>
// #define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../date.h"
#include "../tv.h"

TEST_CASE("date simple tests", "[date]")
{
    Date date(10, 9, 2000);

    CHECK(date.get_day() == 10);
    CHECK(date.get_month() == 9);
    CHECK(date.get_year() == 2000);

    SECTION("test set day")
    {
        date.set_day(2);
        CHECK(date.get_day() == 2);
        CHECK(date.get_month() == 9);
        CHECK(date.get_year() == 2000);
    }

    SECTION("test set month")
    {
        date.set_month(2);
        CHECK(date.get_day() == 10);
        CHECK(date.get_month() == 2);
        CHECK(date.get_year() == 2000);
    }

    SECTION("test set year")
    {
        date.set_year(2001);
        CHECK(date.get_day() == 10);
        CHECK(date.get_month() == 9);
        CHECK(date.get_year() == 2001);
    }
}

TEST_CASE("tv simple tests", "[tv]")
{
    Date start_date(1, 1, 2001);
    Date end_date(1, 1, 2002);
    vector<string> canals;
    canals.push_back("canal1");
    canals.push_back("canal2");
    canals.push_back("canal3");

    Tv offer("offer1", 1, start_date, end_date, 1000, canals);

    CHECK(offer.get_name() == "offer1");
    CHECK(offer.get_time() == 1);
    CHECK(offer.get_price() == 1000);
    CHECK(offer.get_start_date().get_day() == 1);
    CHECK(offer.get_start_date().get_month() == 1);
    CHECK(offer.get_start_date().get_year() == 2001);
    CHECK(offer.get_end_date().get_day() == 1);
    CHECK(offer.get_end_date().get_month() == 1);
    CHECK(offer.get_end_date().get_year() == 2002);

    SECTION("test setters", "[tv]")
    {
        start_date.set_day(2);
        start_date.set_month(2);
        start_date.set_year(2010);

        Date end_date_2(2, 2, 2012);

        offer.set_start_date(start_date);
        offer.set_end_date(end_date_2);

        offer.set_name("offer2");
        offer.set_time(2);
        offer.set_price(1100);

        CHECK(offer.get_name() == "offer2");
        CHECK(offer.get_time() == 2);
        CHECK(offer.get_price() == 1100);
        CHECK(offer.get_start_date().get_day() == 2);
        CHECK(offer.get_start_date().get_month() == 2);
        CHECK(offer.get_start_date().get_year() == 2010);
        CHECK(offer.get_end_date().get_day() == 2);
        CHECK(offer.get_end_date().get_month() == 2);
        CHECK(offer.get_end_date().get_year() == 2012);
    }
}