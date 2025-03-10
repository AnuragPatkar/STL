#include <iostream>
#include <list> // list mtlb doubly linked list
using namespace std;
int main()
{
    list<int> l1 = {30, 60, 20, 40};
    // How to acces list elements
    // [] subscript operator and at() are not in list
    // reason = [] and at() index based hote h and list index based nhi hoti h , uske her node m uske agle node ka address hota h

    // 1. Implicit iterator
    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    // 2. Explicit iterator
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";
    cout << endl;

    //functions
    // back(), front(),empty(),size(),,swap(),clear(),merge()
    // push_back(),pop_back(),push_front(),pop_front(),erase(),emplace(),emplace_back(),emplace_front(),insert(),reverse()
    
    cout<<l1.back()<<" "<<l1.front()<<endl;

    l1.reverse();
    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    return 0;
}