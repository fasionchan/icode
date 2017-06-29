/**
 * FileName:   autoptr1.cpp
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
#include <memory>

using namespace std;


/**
 * define output operator for auth_ptr
 * - print object value or NULL
 */
template <class T>
ostream& operator<< (ostream& strm, const auto_ptr<T>& p)
{
    // does p own an object?
    if (p.get() == NULL) {
        strm << "NULL";     // NO: print NULL
    }
    else {
        strm << *p;         // YES: print the object
    }

    return strm;
}


int main()
{
    auto_ptr<int> p(new int(42));
    auto_ptr<int> q;

    cout << "after initialization:" << endl;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    q = p;
    cout << "after assigning auto pointers:" << endl;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    *q += 13;   // change value of the object q owner
    p = q;
    cout << "after change and reassignment:" << endl;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
}
