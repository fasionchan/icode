/**
 * FileName:   func.cpp
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

void add10(int& elem)
{
    elem += 10;
}


void f()
{
    vector<int> coll;

    for_each(coll.begin(), coll.end(),      // range
                add10);                     // operation
}
