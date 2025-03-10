//! Assignment-5: vector

/* //? 1. Write a function to delete all the values from the first negative value occurred in a given vector of integers.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {10, 25, 30, 18, -15, 10, 12};

    vector<int>::iterator it;

    for (it = v1.begin(); it != v1.end(); it++)
    {
        if (*it < 0)
        {
            v1.erase(it, v1.end());
            break;
        }
    }

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     if (v1[i] < 0)
    //     {
    //         v1.erase(v1.begin() + i, v1.end());
    //     }
    // }
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
} */

/* //? 2. Create a vector object with three integer values. Now insert 25 three times just before the last element (call insert method only once).
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {10, 20, 30};
    v1.insert(v1.end() - 1, 3, 25);
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
} */

/* //? 3. Create a vector of vectors of integer values from a given vector of integers such that each vector inside a vector contains sorted integer elements that appears in the given vector in consecutive places. For example, given vector has {2,4,10,5,7,6,15,20,3,9} values then the resulting vector contains 4 vectors (2,4,10}, {5,7}, {6,15,20} and {3,9}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> given_vector = {2, 4, 10, 5, 7, 6, 15, 20, 3, 9};
    vector<vector<int>> v1;
    vector<int> *ptr;
    int i = 0, s, e, j = 0;
    while (i < given_vector.size() - 1)
    {
        s = i;
        while (i < given_vector.size() - 1 && given_vector.at(i) < given_vector.at(i + 1))
            i++;
        e = ++i;
        ptr = new vector<int>();
        ptr->insert(ptr->begin(), given_vector.begin() + s, given_vector.begin() + e);
        v1.insert(v1.begin() + j, *ptr);
        j++;
    }
    for (auto x : v1)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
} */

/* //? 4. Given vector has integer values stored in it. Write a function to delete all the prime numbers from the vector.
#include <iostream>
#include <vector>
using namespace std;
bool prime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i == x)
        return true;
    else
        return false;
}
int main()
{
    vector<int> v1 = {2, 4, 10, 5, 8, 6, 15, 20, 3, 9, 11, 7, 13, 17};
    for (int i = 0; i < v1.size(); i++)
    {
        if (prime(v1[i]))
        {
            v1.erase(v1.begin() + i);
            i--; // Decrement index to check the new element at this position
        }
    }
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
} */

/* //? 5. Create a vector from the given vector of three vectors of integers, such that take first 3 values from the first vector, last two values of the second vector and all the elements of third vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 2, 3, 4, 5},
                               {6, 7, 8, 9, 10},
                               {11, 12, 13, 14, 15}};
    vector<int> v1;
    v1.insert(v1.end(), vec.at(0).begin(), vec.at(0).begin() + 3);
    v1.insert(v1.end(), vec.at(1).end() - 2, vec.at(1).end());
    v1.insert(v1.end(), vec.at(2).begin(), vec.at(2).end());

    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
} */