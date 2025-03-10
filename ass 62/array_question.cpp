//! Assignment-62: array

/* //? 1. Create an array object for int values of size 5. Print array elements from right to left using explicit iterator
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr= {1, 2, 3, 4, 5};

    array<int, 5>::reverse_iterator rt;
    for (rt = arr.rbegin(); rt != arr.rend(); rt++)
        cout << *rt << " ";
    cout << endl;
    return 0;
} */

/* //? 2. Create an array object for float values of size 5. Calculate average of numbers and display it.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<float, 5> a1;
    cout << "Enter 5 Numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a1[i];

    float s1 = 0;
    for (int i = 0; i < 5; i++)
        s1 += a1.at(i);
    cout << "Average: " << s1 / 5.0 << endl;

    float s2 = 0;
    for (auto x : a1)
        s2 += x;
    cout << "Average: " << s2 / 5.0 << endl;

    float s3 = 0;
    array<float, 5>::iterator it;
    for (it = a1.begin(); it != a1.end(); it++)
        s3 += *it;
    cout << "Average: " << s3 / 5.0 << endl;

    return 0;
} */

/* //? 3. Create an array object for int values of size 10. Take input from user. Find the greatest element of the array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 10> a1;
    cout << "Enter 10 Numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> a1[i];

    int max=a1[0];
    for(int i=1;i<10;i++)
    {
        if(max<a1[i])
         max=a1[i];
    }
    cout<<"Greatest Number of Array: "<<max<<endl;

    return 0;
} */

/* //? 4. Create an array object for Complex type values of size 5. Write a function to input values, display values. Also define a method to calculate sum of all the complex numbers.
#include <iostream>
#include <array>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void input(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
    Complex add(Complex C)
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
};
int main()
{
    array<Complex, 5> arr;
    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cout << "Complex Number " << i + 1 << ":";
        cin >> x >> y;
        arr[i].input(x, y);
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i].display();
    }

    Complex total_sum;
    total_sum.input(0, 0);
    for (int i = 0; i < 5; i++)
    {
        total_sum = total_sum.add(arr[i]);
    }
    total_sum.display();
    return 0;
} */

/* //? 5. Create an array for int values of size 10. Initialise it with some values. Now sort array elements.
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    array<int, 10> arr;
    cout << "Enter 10 Numbers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    return 0;
} */