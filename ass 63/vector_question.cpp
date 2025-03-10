//! Assignment-4: vector

/* //? 1. Create a vector object and initialise it with 5 integer values. Display vector values using subscript operator.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 45, 55, 60, 18};
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
} */

/* //? 2. Create a vector object and initialise it with 5 float values. Display vector values using at() method.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> v = {2.5, 3.5, 4.6, 7.5, 2.8};
    for (int i = 0; i < 5; i++)
        cout << v.at(i) << " ";
    cout << endl;
    return 0;
} */

/* //? 3. Create a vector object and initialise it with 5 string values. Display vector values using implicit iterator.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> v = {"Indore", "Bhopal", "Ujjain", "Mumbai", "Delhi"};
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
} */

/* //? 4. Create a vector object and initialise it with 5 integer values. Display vector values using explicit iterator.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 45, 55, 60, 18};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
} */

/* //? 5. Write a C++ function that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.
#include <iostream>
#include <vector>
using namespace std;
vector<int> find(vector<int> v1)
{
    vector<int> s;
    for (int i = 1; i < v1.size() - 1; i++)
    {
        if (v1[i] < v1[i - 1] && v1[i] < v1[i + 1])
        {
            s.push_back(v1[i]);
        }
    }
    return s;
}
int main()
{
    vector<int> v1 = {1, 9, 8, 7, 8, 4, 2, 6, 3, 5};

    vector<int> S1 = find(v1);
    for (auto x : S1)
        cout << x << " ";
    cout << endl;
    return 0;
} */