//Anish Laddha Period 2 
//Chapter 4
//Problem 4.2, print small, large, cumul. sum of inputs, and adjacent pairs.
#include <iostream>
using namespace std;

int main()
{
    int small;
    int large;
    int sum = 0;
    int even = 0;
    int odd = 0;
    int prev = 0;
    bool first = true;

    int num;
    while(true)
    {
        cout << "Enter num (-1 to exit): " << endl;
        cin >> num;
        if (cin.fail())
        {
            break;
        }
        if (num == -1)
        {
            break;
        }
        if (first == true)
        {
            small = num;
            large = num;
            sum += num;
            if(num %2 == 0)
            {
                even++;
            } else
            {
                odd++;
            }
            
            first = false;

            cout << "Smallest Number: " << small << endl;
            cout << "Largest Number: " << large << endl;
            cout << "# of evens: " << even << endl;
            cout << "# of odds: " << odd << endl;
            cout << "Cumulative Sum: " << sum << endl;
            if(prev == num){
                cout << num << " and " << num << " are pairs" << endl;
            }
            prev = num;
        } else
        {
            if (num < small)
            {
                small = num;
            } else if(num > large)
            {
                large = num;
            }
            sum += num;
            if(num %2 == 0)
            {
                even++;
            } else
            {
                odd++;
            }
            cout << "Smallest Number: " << small << endl;
            cout << "Largest Number: " << large << endl;
            cout << "# of evens: " << even << endl;
            cout << "# of odds: " << odd << endl;
            cout << "Cumulative Sum: " << sum << endl;
            if(prev == num){
                cout << num << " and " << num << " are pairs" << endl;
            }
            prev = num;

        }
        
    }
}