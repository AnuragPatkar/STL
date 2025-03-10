#include <iostream>
#include <queue>
#include <deque>
#include <list>
using namespace std;
int main()
{
    queue<int, list<int>> q1;
    q1.push(10);
    q1.push(20);
    q1.push(25);
    q1.push(45);

    q1.pop();
    cout << q1.front() << endl;
    cout << q1.back() << endl;
    return 0;
}