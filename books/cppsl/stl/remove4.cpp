/**
 * FileName:   remove4.cpp
 * Author:     Fasion Chan
 * @contact:   fasionchan@gmail.com
 * @version:   $Id$
 *
 * Description:
 *
 * Changelog:
 *
 **/

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;


int main()
{
    list<int> coll;

    // insert elements from 6 to 1 and 1 to 6
    for (int i = 1; i <= 6; ++i) {
        coll.push_front(i);
        coll.push_back(i);
    }

    // remove all elements with value 3
    // - poor performance
    coll.erase(remove(coll.begin(), coll.end(), 3),
                coll.end());

    // remove all elements with value 4
    // - good performance
    coll.remove(4);
}
