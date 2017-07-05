/**
 * FileName:   func_tpl.cpp
 * Author:     Fasion Chan
 * @contact:   fasionchan@gmail.com
 * @version:   $Id$
 *
 * Description:
 *
 * Changelog:
 *
 **/

#include <vector>
#include <algorithm>

using namespace std;


template <int theValue>
void add(int& elem)
{
    elem += theValue;
}


void f1()
{
    vector<int> coll;

    for_each(coll.begin(), coll.end(),      // range
                add<10>);                   // operation
}
