#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s1 = {10, 20, 30, 40, 50};
    for (auto x : s1)
        cout << x << " ";
    cout << endl;
    return 0;
}