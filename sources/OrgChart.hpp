#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
namespace ariel{

    class OrgChart{
        private:
            vector<int> mynodes;
        public:
            OrgChart();
            class iterator{
                private:
                public:
                    size_t mysize;
                    iterator();
                    size_t size();
                    friend bool operator!=(const iterator& it1,const iterator& it);
                    bool operator==(iterator& it);
                    iterator operator++();
                    iterator* operator->();
                    iterator operator*();
                    
                 
            };
            OrgChart& add_root(const string& root);
            OrgChart& add_sub(const string& exists,const string& new_node);
            iterator begin();
            iterator end();
            iterator begin_level_order() const;
            iterator end_level_order() const;
            iterator begin_reverse_order() const;
            iterator reverse_order() const;
            iterator begin_preorder() const;
            iterator end_preorder() const;
            friend ostream& operator<< (ostream& output, OrgChart& o);
            friend ostream& operator<<(ostream& output, const iterator& it);
            
    };
}