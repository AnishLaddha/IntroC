//Anish Laddha Period 2 
//Chapter 4
//Problem 4.18, Fibonacci
#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    int c;

    int count;
    cout << "How many fibonnaci numbers?: " << endl;
    cin >> count;
    if(cin.fail())
    {
        cout << "Enter a valid int";
        return 0;
    }
    if(count == 1)
    {
        cout << "1";
    } else if(count == 2)
    {
        cout << "1 1";
    } else if (count > 2)
    {
        cout << "1 1 ";
        for(int i = 0; i < count; i++)
        {
            c = a+b;
            b = a;
            a = c;
            cout << c << " ";

        }
    }
    else
    {
        cout << "Enter a positive integer" << endl;
    }
    return 0;
}