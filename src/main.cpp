#include <iostream>
#include <map>
#include <list>

#include "otusAllocator.hpp"
#include "simpleList.hpp"

using namespace simple_allocator;
using namespace slist;

int main()
{

    std::list<double, Light_Pool_Allocator<double, 120>> list;
    list.push_back(1.0);
    list.push_back(1.0);
    list.push_back(1.0);

    sForwardList<double, Light_Pool_Allocator<double, 64>> list2;

    list2.addTail(12.2);
    list2.addTail(10.0);
    list2.addTail(13.2);

    for (auto it_beg = list2.begin(); it_beg != list2.end(); ++it_beg)
    {
        std::cout << *it_beg << " " << std::endl;
    }

    std::cout << " Im here \n";
    
    std::map<int, int, std::less<>, Light_Pool_Allocator<std::pair<const int, int>, 1000>> my_map;

    my_map[0] = 3;
    my_map[6] = 50;

    return 0;
}