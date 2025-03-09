#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {10, 15, 40, 25, 30, 55, 18, 60, 28, 49};
    vector<string> v2 = {"Damoh", "Jabalpur", "Indore"};

    // How to acces Vector elements
    // 1.[] subscript operator ki help se
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // 2. at() method same as array
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " "; // bound checking
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
        cout << v2.at(i) << " ";
    cout << endl;

    // 3.implicit iterator   // same as array ,auto lkihne se type nhi likhna pdta
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // 4. Explicit iterator
    vector<string>::iterator it;
    for (it = v2.begin(); it != v2.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Back: " << v2.back() << endl;
    cout << "Front: " << v2.front() << endl;
    cout << "Empty: " << v2.empty() << endl;
    cout << "size: " << v2.size() << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    v1.swap(v3);
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    cout << "v3: ";
    for (auto x : v3)
        cout << x << " ";
    cout << endl;

    v1.clear(); // sb clear kr dega
    cout << "Size of v1 after clear: " << v1.size() << endl;

    cout << "Capacity: " << v1.capacity() << endl; // v1 m koi element nhi h but capacity uski 5 hi h , phle 10 thi swap ke bad 5 ho gyi thi

    // Ways to insert data in vector
    // 1.push_back() - append ki trh last in insert karega
    v1.push_back(60);
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // 2.insert
    v1.insert(v1.begin(), {30, 40, 50}); // v1.begin() se start m insert hogi
    v1.insert(v1.begin() + 1, {20});     // +1 krne se 20 second position m insert hoga
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // 3. emplace_back
    v1.emplace_back(100); // last in append krega
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    // jb aapka vector non primitive type(datatype- student, car) data rkh rha h to emplace_back use krna chahiye efficiency ke liye

    // 4.emplace
    v1.emplace(v1.begin() + 2, 200);
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    cout << "Capacity: " << v1.capacity() << endl; // phle 5 thi , jese size 5 se upr gya dynamically size double (10) ho gya

    // insert a number mutliple in continue
    v1.insert(v1.begin() + 2, 4, 120);
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";

    cout << endl;
    // edit
    *(v1.begin() + 1) = 0;
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // shrink
    v1.shrink_to_fit();
    cout << "Capacity: " << v1.capacity() << endl; // capacity half nhi hogi dynamic array ki trh , jitna size h utni ho jayegi

    // v3 ke kuch element v1 m insert krne h
    v1.insert(v1.begin(), v3.begin() + 1, v3.begin() + 3);
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    v1.insert(v1.end() - 1, v3.begin() + 1, v3.begin() + 3); // 60 and 100 ke beech m add kr rhe h
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // How to delete elements?
    // 1. erase()
    v1.erase(v1.begin() + 3);
    cout << "v1(delete): ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    // 2. erase() - range delete krni h
    v1.erase(v1.begin()+3,v1.begin()+8); //starting inclusive and end element exclusive hota h
    cout << "v1(range deleted): ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    //3. pop_back - delete last element
    v1.pop_back();
    cout << "v1: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    return 0;
}