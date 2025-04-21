#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
    map<string, string> presidentStates;

    std::pair<std::string, std::string> myInfo = std::make_pair("Caitlynn", "Michigan");

    std::map<std::string, std::string> presidentStates;
    std::ifstream inFile("presidents.txt");
    std::string name, state;

    string name, state, line;
    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, name, '\t');
            getline(ss, state, '\t');
            while (inFile >> name >> state) {
                presidentStates[name] = state;
            }

            }
    }

    for (auto it = presidentStates.begin(); it != presidentStates.end(); ++it) {
        std::cout << "President: " << it->first << ", State: " << it->second;

    cout<<"***************************";

    std::cout << "Thomas Jefferson was from: " << presidentStates["ThomasJefferson"];

        presidentStates.insert(myInfo);

        std::cout << "Name: " << myInfo.first << ", State: " << myInfo.second;

        std::pair<std::map<std::string, std::string>::iterator, bool> ret;
        ret = presidentStates.insert(myInfo);

        if (!ret.second) {
            std::cout << "The key " << myInfo.first << " already exists.";

            std::cout << "Current value for the existing key: " << ret.first->second;
        } else {
            std::cout << "New key-value pair inserted.";
        }

        return 0;
    }