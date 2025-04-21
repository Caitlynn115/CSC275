#include<iostream>
#include<set>
#include<string>
using std::cout;
using std::endl;
using std::string;
using std::set;
int main()
{
    set<string> setOfNames;

    setOfNames.insert("John");
    setOfNames.insert("Jane");
    setOfNames.insert("Nick");
    setOfNames.insert("Steve");
    string mynames[]={"Adam", "Sue"};

    setOfNames.insert(mynames, mynames + 2);

    pair < set < string :: iterator, bool > ret;
    ret = setOfNames.insert("Adam");

    if (!ret.second)
        cout << "Adam is within this set";

    cout << "Current Set: ";
    for (set <string> :: iterator it = setOfNames.begin(); it != setOfNames.end(); it++)
        cout << *it;

    set <string> :: iterator it = setOfNames.find("Adam");
    if (it != setOfNames.end())
        cout << "Located Adam";
    else
        cout << "Unable to locate Adam";

    it = setOfNames.find("adam");
    if (it != setOfNames.end())
        cout << "'adam' found." << endl;
    else
        cout << "'adam' not found." << endl;


    setOfNames.erase("Adam");
    cout << "Set after erasing Adam:" << endl;
    for (set<string>::iterator it = setOfNames.begin(); it != setOfNames.end(); ++it)
        cout << *it << endl;

    return 0;
}
