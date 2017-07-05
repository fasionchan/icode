/**
 * FileName:   foreach1.cpp
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
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


// function that prints the passed argument
void print(int elem)
{
    cout << elem << ' ';
}


int main()
{
    vector<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }

    // print all elements
    for_each(coll.begin(), coll.end(),      // range
                print);                     // operation
    cout << endl;
}
