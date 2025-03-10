#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
int main()
{
    vector<int> v1 = {37, 45, 55, 67, 91};
    string s1 = "Mohit";
    pair<string, vector<int>> p1; // pair = string + vector (int type ka)
    p1 = make_pair(s1, v1);
    pair<int, string> p2(101, "Bhopal");
    pair<int, int> p3(105, 53);

    cout << p1.first << " ";
    for (auto x : p1.second)
        cout << x << " ";
    cout << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    tuple<int, double, char> t1(101, 2.5, 'A');
    tuple<int, string, string> t2(101, "Anurag", "Mahadev");
    tuple<int, string, string, int> t3;
    t3 = make_tuple(2021, "Gauri", "Sankar", 105);
    cout << get<0>(t3) <<" "<< get<1>(t3)<<" " << get<2>(t3)<<" " << get<3>(t3) << endl;
    return 0;
}