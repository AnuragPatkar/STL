#include<iostream>
using namespace std;

void TOH(int n, char Beg, char Aux, char End)
{
    if(n>0)
    {
        TOH(n-1, Beg, End, Aux);
        cout << "\n" << Beg << "->" << End;
        TOH(n-1, Aux, Beg, End);
    }
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}