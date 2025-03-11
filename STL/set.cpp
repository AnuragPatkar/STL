#include <iostream>
#include <set>
#include <string>
using namespace std;
class Book
{
private:
    int bookid;
    string name;
    float price;

public:
    Book(int i, string n, float p) : bookid(i), name(n), price(p) {}
    int getBookid() const { return bookid; }
    float getBookprice() const { return price; }
    string getName() const { return name; }
    void showBook() const
    {
        cout << bookid << " " << name << " " << price << endl;
    }
};
class desc // functor
{
public:
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};
class OrderbyBookid // functor
{
public:
    bool operator()(const Book &b1, const Book &b2) const
    {
        if (b1.getBookid() < b2.getBookid())
            return true;
        else
            return false;
    }
};
class OrderbyBookPrice // functor
{
public:
    bool operator()(const Book &b1, const Book &b2) const
    {
        if (b1.getBookprice() < b2.getBookprice())
            return true;
        else
            return false;
    }
};
class OrderbyName // functor
{
public:
    bool operator()(const Book &b1, const Book &b2) const
    {
        if (b1.getName() < b2.getName())
            return true;
        else
            return false;
    }
};
int main()
{
    set<int> s1 = {10, 20, 45, 40, 50}; // always sorted order m rhega
    for (auto x : s1)
        cout << x << " ";
    cout << endl;

    set<int> s2 = {10, 20, 10, 20, 45, 40, 50}; // duplicate value nhi lega
    for (auto x : s2)
        cout << x << " ";
    cout << endl;

    set<int, desc> s3 = {10, 20, 45, 40, 50}; // desending order m print krega
    for (auto x : s3)
        cout << x << " ";
    cout << endl;

    set<Book, OrderbyName> s4 = {*new Book(101, "java", 350.6),
                                 *new Book(104, "python", 405.65),
                                 *new Book(103, "CPP", 275.5),
                                 *new Book(102, "Django", 870.0),
                                 *new Book(105, "Java script", 365.0)};

    for (auto x : s4)
        x.showBook();
    cout << endl;

    set<Book, OrderbyName>::iterator it; // iterator se print krne m order by name likhna optional h , nhi bhi likho to bhi order by name hi hoga
    for (it = s4.begin(); it != s4.end(); it++)
        it->showBook();
    cout << endl;

    cout << s4.empty() << endl;

    cout << s1.count(10) << endl; // 10 h s1 m ,isliye true aayega
    s1.emplace(70);
    for (auto x : s1)
        cout << x << " ";
    cout << endl;

    s1.erase(70);
    for (auto x : s1)
        cout << x << " ";
    cout << endl;

    set<int>::iterator it1=s1.begin();
    set<int>::iterator it2=s1.end();
    it1++;
    it2--;
    s1.erase(it1,it2);
    for (auto x : s1)
        cout << x << " ";
    cout << endl;


    return 0;
} 