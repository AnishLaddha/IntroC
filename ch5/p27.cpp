//Anish Laddha Period 2 
//Chapter 5
//Problem 5.27, recursive string reverser
#include <iostream>
#include<string>
using namespace std;

string reverse(string str);
int main()
{
    string user_str;
    cout<< "Enter string you want reversed: ";
    cin >> user_str;
    cout << "Reversed: " << reverse(user_str)<< endl;
}

string reverse(string str)
{
    if(str.length() <= 1)
    {
        return str;
    }
    string new_str = reverse(str.substr(1, str.length()-1)) + str.at(0);
    return new_str;
    
}