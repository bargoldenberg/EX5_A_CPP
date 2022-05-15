
#include "OrgChart.hpp"
#include<string>
#include<iostream>
using namespace std;
using namespace ariel;



OrgChart::OrgChart(){}
OrgChart& OrgChart::add_root(const string& root){return *this;}
OrgChart& OrgChart::add_sub(const string& exists,const string& new_node){return *this;}
bool ariel::operator!=(const OrgChart::iterator& it1,const OrgChart::iterator& it){return false;}
bool OrgChart::iterator::operator==(iterator& it){return false;}
OrgChart::iterator OrgChart::iterator::operator*(){return *this;}
OrgChart::iterator OrgChart::iterator::operator++(){return *this;}
OrgChart::iterator* OrgChart::iterator::operator->(){return this;}
OrgChart::iterator OrgChart::begin_level_order() const{return OrgChart::iterator();}
OrgChart::iterator OrgChart::end_level_order() const{return OrgChart::iterator();}
OrgChart::iterator OrgChart::begin_reverse_order() const{return OrgChart::iterator();}
OrgChart::iterator OrgChart::reverse_order() const{return OrgChart::iterator();}
OrgChart::iterator OrgChart::begin_preorder() const{return OrgChart::iterator();}
OrgChart::iterator OrgChart::end_preorder() const{return OrgChart::iterator();}
ostream& ariel::operator<<(ostream& output, OrgChart& o){return output;}
ostream& ariel::operator<<(ostream& output, const OrgChart::iterator& it){return output;}
OrgChart::iterator OrgChart::begin(){return OrgChart::iterator();}
OrgChart::iterator OrgChart::end(){return OrgChart::iterator();}
OrgChart::iterator::iterator(){this->mysize=0;}
size_t OrgChart::iterator::size(){return 0;}
