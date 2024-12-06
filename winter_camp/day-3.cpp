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
// Now check loops:
// For
#include <iostream>
using namespace std;
int main()
{
    int a;
    // cout << "Enter First number: ";
    // cin >> a;
   for(int a =1; a<=10; a++){
       cout<<a<<endl;
   }

    return 0;
}
// foreach
// while
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    // cout << "Enter First number: ";
    // cin >> a;
   while(a<=10){
       cout<<a<<endl;
       a++;
   }

    return 0;
}
// dowhile
