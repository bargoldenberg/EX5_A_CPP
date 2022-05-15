#include "doctest.h"
#include <iostream>
#include <algorithm>
#include "/home/bar/Desktop/dev/CPP_Course/Assignment5/EX5_A_CPP/sources/OrgChart.hpp"
using namespace ariel;
using namespace std;
TEST_CASE("GEE"){
    OrgChart e{};
    e.add_root("CEO");
    for(size_t i=0;i<20;i++){
        CHECK_NOTHROW(e.begin_level_order());
    }
}