#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <deque>
using namespace std;
class Employee
{
private:
    int empid;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) : empid(id), name(n), salary(s) {}
    float getsalary()
    {
        return salary;
    }
    void showEmployee()
    {
        cout << empid << " " << name << " " << salary << endl;
    }
};
class CompareSalary // functor
{
public:
    bool operator()(Employee &e1, Employee &e2)
    {
        return e1.getsalary() > e2.getsalary(); // salary ascending order m hogi
    }
};
int main()
{
    priority_queue<int> pq1; // by default vector
    priority_queue<string, deque<string>> pq2;
    priority_queue<Employee, deque<Employee>, CompareSalary> pq3;
    pq3.push(Employee(101, "Shivam", 20000.00));
    pq3.push(Employee(102, "Shalinee", 30000.00));
    pq3.push(Employee(103, "Romil", 25000.00));
    pq3.push(Employee(104, "Jay", 15000.00));

    Employee e=pq3.top();
    e.showEmployee();

    pq1.push(10);
    pq1.push(45);
    pq1.push(25);
    pq1.push(50);
    pq1.push(40);

    cout << pq1.top() << endl;
    pq1.pop();
    cout << pq1.top() << endl;

    pq2.push("Sandeep");
    pq2.push("Anuj");
    pq2.push("Sadhna");
    pq2.push("Jhalkan");
    cout << pq2.top() << endl;

    return 0;
}