#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
void example1() // adjacent find
{
    vector<int> v1 = {10, 10, 12, 5, 6, 11, 11, 22, 42, 22, 10, 32};
    int x = *adjacent_find(v1.begin(), v1.end());
    cout << "pair found with element value " << x << endl;

    vector<int> v2 = {10, 12, 22, 32, 12};
    vector<int>::iterator it;
    it = adjacent_find(v2.begin(), v2.end());
    if (it == v2.end())
        cout << "No such pair found" << endl;
}
void example2() // all_of()
{
    vector<int> v1 = {10, 12, 22, 36, 54, 58};
    if (all_of(v1.begin(), v1.end(), [](int a) -> bool
               { return a % 2 == 0; }))
        cout << "\nAll Numbers are Even";
    else
        cout << "\nAll Numbers are not Even";
}
void example3() // any_of
{
    vector<int> v1 = {10, 11, 22, 36, 54, 58};
    if (any_of(v1.begin(), v1.end(), [](int a) -> bool
               { return a % 2 != 0; }))
        cout << "\nAt least one element is Odd";
    else
        cout << "\nNone of element is Odd";
}
void example4() // binary search
{
    vector<int> v1 = {1, 4, 4, 15, 18, 18, 22, 45, 78, 99, 102, 158};
    if (binary_search(v1.begin(), v1.end(), 102))
        cout << "Element found";
    else
        cout << "Element not found";
}
void example5() // lower_bound() and upper_bound()
{
    vector<int> v1 = {1, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    vector<int>::iterator it;
    it = lower_bound(v1.begin(), v1.end(), 7);
    cout << "\nElement just Greater than or equal to 7 is at index: " << it - v1.begin();
    it = upper_bound(v1.begin(), v1.end(), 7);
    cout << "\nElement just Greater than 7 is at index: " << it - v1.begin();
}
void example6() // Max_Element or Min_Element
{
    vector<int> v1 = {1, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    cout << "\nMax Element: " << *max_element(v1.begin(), v1.end() - 4);
    cout << "\nMin Element: " << *min_element(v1.begin(), v1.end());
}
void example7() // for_each
{
    vector<int> v1 = {1, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    for_each(v1.begin(), v1.end(), [](int x) -> void
             { cout << endl
                    << x << "-" << x * x; });
}
void example8() // generate()
{
    vector<int> v1(10);
    generate(v1.begin(), v1.end(), []() -> int
             {static int i;++i;return i*i; });
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
}
void example9() // generate_n()
{
    vector<int> v1(10);
    generate_n(v1.begin(), 5, []() -> int
               {static int i;++i;return i*i; });
    generate_n(v1.begin() + 5, 5, []() -> int
               {static int j;++j;return j*j*j; });
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
}
void example10() // count() and count_if()
{
    vector<int> v1 = {1, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    cout << count(v1.begin(), v1.end(), 14) << endl;
    cout << count_if(v1.begin(), v1.end(), [](int x) -> bool
                     { return x < 15; });
}
void example11() // find()
{
    vector<int> v1 = {1, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    vector<int>::iterator it;
    it = find(v1.begin(), v1.end(), 112);
    if (it == v1.end())
        cout << "\nElement not Found.";
    else
        cout << "\nElement found at index " << it - v1.begin();
}
void example12() // find_if()
{
    vector<int> v1 = {5, 4, 4, 7, 7, 21, 35, 53, 78, 112, 117, 119, 200};
    vector<int>::iterator it;
    it = find_if(v1.begin(), v1.end(), [](int x) -> bool
                 {int k;
                 k=(int)sqrt(x);
                return k*k==x; });
    if (it == v1.end())
        cout << "\nElement not Found.";
    else
        cout << "\nElement " << *it << " found at index " << it - v1.begin();
}
void example13() // equal()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2, 3, 4};
    if (equal(v2.begin(), v2.end(), v1.begin() + 1))
        cout << "Equal";
    else
        cout << "Not Equal";
}
void example14() // fill()
{
    vector<int> v1 = {10, 10, 20, 20, 20, 30, 40, 40, 50, 50, 50, 60, 70, 70, 80};
    fill(v1.begin() + 1, v1.begin() + 5, 100);
    for (auto num : v1)
        cout << num << " ";
}
void example15() // remove()
{
    vector<int> v1 = {11, 2, 12, 23, 11, 45, 63, 25};
    vector<int>::iterator it, newEnd;
    newEnd = remove(v1.begin(), v1.end(), 11);
    for (auto num : v1)
        cout << num << " ";
    cout << endl;
    for (it = v1.begin(); it != newEnd; it++)
        cout << *it << " ";
    cout << endl;
}
void example16() // reverse()
{
    vector<int> v1 = {11, 2, 12, 23, 11, 45, 63, 25};
    reverse(v1.begin(), v1.end());
    for (auto num : v1)
        cout << num << " ";
    cout << endl;
}
void example17() // replace
{
    vector<int> v1 = {11, 2, 12, 23, 11, 45, 63, 25};
    replace(v1.begin(), v1.end(), 12, 24);
    for (auto num : v1)
        cout << num << " ";
    cout << endl;
}
void example18() // search
{
    vector<int> v1 = {11, 22, 33, 44, 66, 55, 88, 77, 99};
    vector<int> v2 = {66, 55, 88};
    vector<int>::iterator it;
    it = search(v1.begin(), v1.end(), v2.begin(), v2.end());
    if (it != v1.end())
        cout << "Subsequence found at index " << it - v1.begin();
    else
        cout << "Subsequence not found";
}
void example19() // is_sorted
{
    vector<int> v1 = {11, 22, 33, 44, 66, 55, 88, 77, 99};
    if (is_sorted(v1.begin(), v1.end()))
        cout << "Yes,it is sorted";
    else
        cout << "No, it is not sorted";
}
void example20()//is_sorted_until
{
    vector<int>v1={11,14,22,77,33,33,44,55};
    vector<int>::iterator it;
    it=is_sorted_until(v1.begin(),v1.end());
    cout<<*it<<endl;
    cout<<"Number of element sorted until the first unsorted one is "<<it-v1.begin();

}
int main()
{
    example20();
    return 0;
}