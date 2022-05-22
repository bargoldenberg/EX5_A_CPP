#include "doctest.h"
#include "OrgChart.hpp"
using namespace ariel;
using namespace std;
/**
 * AUTHOR: BAR GOLDENBERG
 * 
 */

TEST_CASE("GOOD_INPUT"){
    OrgChart UFC;
    CHECK_NOTHROW(UFC.add_root("DANA_WHITE"));
    CHECK_NOTHROW(UFC.add_sub("DANA_WHITE","SEAN_SHELBY"));
    CHECK_NOTHROW(UFC.add_sub("DANA_WHITE","MICK_MAYNARD"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","KAMARU_USMAN"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","FRANCIS_NGANOU"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","ISRAEL_ADESANYA"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","DAVISON_FIGUREDO"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","PAPPER_CHAMP"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","ALEX_VOLK"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","OLIVIERA"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","TEXIERA"));
    vector<string> level_order_ufc = {"DANA_WHITE","SEAN_SHELBY","MICK_MAYNARD","KAMARU_USMAN","FRANCIS_NGANOU","ISRAEL_ADESANYA","DAVISON_FIGUREDO","PAPPER_CHAMP","ALEX_VOLK","OLIVIERA","TEXIERA"};
    size_t i=0;
    /*
    TEST LEVEL ORDER.
    */
    for(auto it = UFC.begin_level_order();it!=UFC.end_level_order();++it){
        CHECK_EQ(*it,level_order_ufc.at(i++));
    }
    /*
    TEST REVERSE ORDER.
    */
    vector<string> reverse_level_order_ufc = {"KAMARU_USMAN","FRANCIS_NGANOU","ISRAEL_ADESANYA","DAVISON_FIGUREDO","PAPPER_CHAMP","ALEX_VOLK","OLIVIERA","TEXIERA","SEAN_SHELBY","MICK_MAYNARD","DANA_WHITE"};
    i=0;
    for(auto it = UFC.begin_reverse_order();it!=UFC.reverse_order();++it){
        CHECK_EQ(*it,reverse_level_order_ufc.at(i++));
    }
    i=0;
    vector<string> pre_order_ufc = {"DANA_WHITE","SEAN_SHELBY","KAMARU_USMAN","FRANCIS_NGANOU","ISRAEL_ADESANYA","MICK_MAYNARD","DAVISON_FIGUREDO","PAPPER_CHAMP","ALEX_VOLK","OLIVIERA","TEXIERA"};
    /*
    TEST PREORDER.
    */
    for(auto it = UFC.begin_preorder();it!=UFC.end_preorder();++it){
        CHECK_EQ(*it,pre_order_ufc.at(i++));
    }
}
TEST_CASE("BAD INPUT"){
    OrgChart UFC;
    /*
    CANNOT ADD SUB WHEN THERE IS NO ROOT.
    */
    CHECK_THROWS(UFC.add_sub("DANA_WHITE","KHAMZAT"));
    CHECK_NOTHROW(UFC.add_root("DANA_WHITE"));
    CHECK_NOTHROW(UFC.add_sub("DANA_WHITE","SEAN_SHELBY"));
    /*
    KHABIB DOSENT EXIST!!
    */
    CHECK_THROWS(UFC.add_sub("KHABIB","CONOR"));
    CHECK_NOTHROW(UFC.add_sub("DANA_WHITE","MICK_MAYNARD"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","KAMARU_USMAN"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","FRANCIS_NGANOU"));
    CHECK_NOTHROW(UFC.add_sub("SEAN_SHELBY","ISRAEL_ADESANYA"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","DAVISON_FIGUREDO"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","PAPPER_CHAMP"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","ALEX_VOLK"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","OLIVIERA"));
    CHECK_NOTHROW(UFC.add_sub("MICK_MAYNARD","TEXIERA"));
}