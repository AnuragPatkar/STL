#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> f1 = {10, 30, 20, 50, 40};
    forward_list<string> f2 = {"Anuj", "Akash", "Anurag"};

    // implicit iterator
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    // explicit iterator
    cout << "f2:";
    forward_list<string>::iterator it; // iterator
    for (it = f2.begin(); it != f2.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "f2:";
    forward_list<string>::const_iterator cit; // const_iterator
    for (cit = f2.cbegin(); cit != f2.cend(); cit++)
        cout << *cit << " ";
    cout << endl;

    // function
    cout << "Empty:" << f2.empty() << endl;
    cout << "front:" << f2.front() << endl;
    f2.clear();
    cout << "f2: ";
    for (auto x : f2)
        cout << x << " ";
    cout << endl;

    f1.push_front(5); // push front
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.pop_front(); // pop front
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    auto i = f1.begin();
    f1.insert_after(i, 55);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.insert_after(i, {5, 15, 25}); // range insert ke liye
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.insert_after(f1.before_begin(), 100); // 0 index ke liye
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.emplace_front(120);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    forward_list<int>::iterator i1;
    i1 = f1.begin();
    advance(i1, 2);
    f1.emplace_after(i1, 90);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    /* forward_list<int>::iterator i1;
    i1 = f1.begin();
    advance(i1, 2); */
    f1.erase_after(i1);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    cout << "max " << f1.max_size() << endl; //  max numbers of item can be stored

    forward_list<int> f3 = {1, 3, 2, 5, 4};
    f1.merge(f3);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;
    cout << "f3: ";
    for (auto x : f3)
        cout << x << " ";
    cout << endl;

    f1.remove(120);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.remove_if([](int x)
                 { return x == 40; });
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.resize(10);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.reverse();
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.sort();
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    forward_list<int> f4 = {60,60, 70, 80, 90};
    f1.swap(f4);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;
    cout << "f4: ";
    for (auto x : f4)
        cout << x << " ";
    cout << endl;

    f1.unique();  // delete consecutive duplicate element
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;

    f1.splice_after(f1.before_begin(), f4);
    cout << "f1: ";
    for (auto x : f1)
        cout << x << " ";
    cout << endl;
    return 0;
}