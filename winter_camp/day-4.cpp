// Recursion: function call itself
// find the factorial of a number using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Result: " << factorial(n) << endl;
    return 0;
}
// WAP to write the nth fibonacci series using recursion
#include <iostream>
using namespace std;
int fibonacci_series(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci_series(n - 1) + fibonacci_series(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Result: " << fibonacci_series(n) << endl;
    return 0;
}
// WAP to find nth power of a number num using recursion
#include <iostream>
using namespace std;
double power(double num, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        return num * power(num, n - 1);
    }
    else
    {
        return 1 / power(num, -n);
    }
}
int main()
{
    double num;
    int n;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the power: ";
    cin >> n;
    cout << " Result : " << power(num, n) << endl;
    return 0;
}
//  WAP to reverse a stringusing recursion

#include <iostream>
#include <string>
using namespace std;
void reverse_String(string &str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    swap(str[start], str[end]);
    reverse_String(str, start + 1, end - 1);
}
int main(){
    // string str="HELLO";
    string str;
    cout<<"Enter the string"<<endl;
    // cin>> str;
    getline(cin, str);
     reverse_String(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;
    return 0;
}
// 