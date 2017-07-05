/**
 * FileName:   map1.cpp
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
#include <map>
#include <string>

using namespace std;


int main()
{
    /**
     * type of the container
     * - map: elements key/value pairs
     * - string: keys have type string
     * - float: values have type float
     */
    typedef map<string, float> StringFloatMap;
    StringFloatMap coll;

    // insert some elements into the collection
    coll["VAT"] = 0.15;
    coll["PI"] = 3.1415;
    coll["an arbitrary number"] = 4983.223;
    coll["Null"] = 0;

    /**
     * print all elements
     * - iterate over all elements
     * - element member first is the key
     * - element member second is the value
     */
    StringFloatMap::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << "key: \"" << pos->first << "\" "
            << "value: " << pos->second << endl;
    }
}
