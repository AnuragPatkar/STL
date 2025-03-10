#include <iostream>
#include <array>
using namespace std;
int main()
{
  array<int, 4> a1 = {10, 30, 40, 60};                   // array< datatype, size> name
  array<string, 3> a2 = {"Damoh", "Jabalpur", "Indore"}; // a2={....} initilaizer list se direct initilaize kr skte h

  // How to access array elements
  // 1. using [] subscript operator
  for (int i = 0; i < 4; i++)
    cout << a1[i] << " "; // jese array m krte the
  cout << endl;           // problem ye bound check nhi krta ,ex- agr loop 5 tk chala de to 4 main values and ek garbage value print kr dega

  // 2 using at()
  for (int i = 0; i < 4; i++)
    cout << a1.at(i) << " "; // same as array , bss .at(i) krna h
  cout << endl;              // bound check krta h , jitni value h utni print krga , aage ke liye error show krega

  try // error handling for 2nd type
  {
    for (int i = 0; i < 5; i++)
      cout << a1.at(i) << " ";
    cout << endl;
  }
  catch (std::out_of_range e)
  {
    cout << "Array out of index exception" << endl;
  }

  // 3. using implicit operator
  //  for (int x : a1)   //int likha h to jaruri h ki int type ki value , but auto likhne se bo khud detect kr lega
  for (auto x : a1)
    cout << x << " ";
  cout << endl;

  // 4.using Explicit operator
  array<int, 4>::iterator i1;
  for (i1 = a1.begin(); i1 != a1.end(); i1++)
  {
    cout << *i1 << " ";
  }
  cout << endl;

  array<int, 4>::reverse_iterator i2;
  for (i2 = a1.rbegin(); i2 != a1.rend(); i2++)
  {
    cout << *i2 << " ";
  }
  cout << endl;

  array<int, 4>::const_iterator i3;
  i3 = a1.cbegin();
  cout << *i3 << endl;
  cout << *(i3 + 1) << endl;
  cout << *(i3 + 2) << endl;

  *(a1.begin() + 2) = 70;
  cout << *(i3 + 2) << endl;

  cout << a1.back() << endl;
  cout << a1.front() << endl;
  cout << a1.empty() << endl;
  cout << a1.size() << endl;
  return 0;
}