#include <iostream>

using namespace std;

int main()
{
    int a {}, b {}, c;

    cout << "Enter an integer to sum : ";
    cin >> a;
    cout << "Enter an second integer to sum : " ;
    cin >> b;

    try
    {
        if(b==0)
            throw(c);
        else
        c=a-b;
        cout << c;
    }
    catch(...)
    {
        cout << "A catch block for all types of exceptions has caught an exception";
    }
    
}