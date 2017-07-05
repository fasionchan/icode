/**
 * FileName:   sort1.cpp
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
#include <string>
#include <deque>
#include <algorithm>

using namespace std;


class Person {
public:
    string firstname() const;
    string lastname() const;
};


/**
 * binary function predicate:
 * - return whether a person is less than another person
 */
bool personSortCriterion(const Person& p1, const Person& p2)
{
    /**
     * a person is less than another person
     * - if the last name is less
     * - if the last name is equal and the first name is less
     */
    return p1.lastname() < p2.lastname() ||
        (!(p2.lastname() < p1.lastname()) && p1.firstname() < p2.firstname());
}


int main()
{
    deque<Person> coll;

    sort(coll.begin(), coll.end(),      // range
            personSortCriterion);       // sort criterion
}
