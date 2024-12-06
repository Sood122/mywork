// Tday we will learn about C++.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
    cout << 55;
    cout << "Hello";
    return 0;
}

// Now lets check about data-types
// int,string,float,boolean,char,varchar,arr[],
#include <iostream>
using namespace std;
int main()
{
    int age = 26;
    char ch = 'a';
    float b = 9.5;
    bool check = true;
    cout << age << endl;
    cout << ch << endl;
    cout << b << endl;
    cout << check << endl;
    return 0;
}
// NOw check some operators
// Arithmatical operator
// +,-,*,/,%

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter second number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    //  arithmatical operators.
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    return 0;
}

// Relational Operators
//>,<,<=,>=,==,=,!=

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter second number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    //  Relational Operators
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    return 0;
}
// bitwise operators
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    return 0;
}
// Lets check about conditions.
// if-else condition
// Practice 1: check a number is even or Odd

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter First number: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}
// switch

// Now check loops:
// For
#include <iostream>
using namespace std;
int main()
{
    int a;
    // cout << "Enter First number: ";
    // cin >> a;
    for (int a = 1; a <= 10; a++)
    {
        cout << a << endl;
    }

    return 0;
}
// foreach
// while
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    while (a <= 10)
    {
        cout << a << endl;
        a++;
    }

    return 0;
}
// dowhile
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    do
    {
        cout << a << endl;
        a++;
    } while (a <= 0);

    return 0;
}
// Functions
// write function to sum of two number
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int result = sum(a, b);
    cout << "The sum is: " << result << endl;
    return 0;
}
// WAP to create a function to print sum upto n number
#include <iostream>
using namespace std;
void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    cout << "The sum " << n << " is: " << sum << endl;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sum(n);
    return 0;
}
// WAP to create function to find factorial of a number n .
#include <iostream>
using namespace std;
void factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    cout << "The factorial " << n << " is: " << factorial << endl;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    factorial(n);
    return 0;
}
// WAP to create function to print nth fibonacci number
// here indexing start from 0
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The result is :" << fibonacci(n) << endl;
    return 0;
}
// here indexing start from 1
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The result is : " << fibonacci(n) << endl;
    return 0;
}
// Array:
//  Collection of homogenious elements.
//  Antiguese memory allowcation.
//  It has a fixed size.
//  to declare an array we need
//  int arr[5]={1,2,3,4,5}
//  WAP to create a function to add all the elements in an array.
#include <iostream>
using namespace std;
int sum_of_Array(int arr[], int size) // function to find sum
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int size=5;  here we are geeting the size of array
    int size;
    cout << "Enter the size: ";
    cin >> size;
    // int arr[]={1,2,3,4,5}; entering the value of array
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) // checking the size
    {
        cin >> arr[i];
    }
    cout << "Result:" << sum_of_Array(arr, size) << endl; // here we are getting te final results
    return 0;
}