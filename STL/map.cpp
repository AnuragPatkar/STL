#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
    map<int, string> m1 = {
        {1, "Bhopal"},
        {2, "Damoh"},
        {3, "Indore"},
        {4, "Ujjain"},
        {5, "Jabalpur"}};
    for (auto e : m1)
    {
        cout << e.first << " " << e.second << endl;
    }

    map<int, string>::iterator it;
    for (it = m1.begin(); it != m1.end(); it++)
        cout << it->first << " " << it->second << endl;

    cout << m1.at(3) << endl; // key dalne se data print hoga
    cout << m1.count(6) << endl;

    pair<int, string> p1 = {6, "Sagar"};
    m1.emplace(p1);
    for (auto e : m1)
    {
        cout << e.first << " " << e.second << endl;
    }
    cout << endl;
    m1.erase(m1.begin());
    for (auto e : m1)
    {
        cout << e.first << " " << e.second << endl;
    }
    cout << endl;
    m1.erase(5);
    for (auto e : m1)
    {
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}
