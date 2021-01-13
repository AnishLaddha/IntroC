//  Anish Laddha
//  September 10
//  Lab 2
//  adds a comma to a 4/5 digit num


#include <iostream>
#include <string>

using namespace std;
int main(){
    int usr_int;
    cout << "Enter a number 1000 -> 99999: " << endl;
    cin >> usr_int;

    int first = usr_int/1000;
    int last = usr_int%1000;
    cout << first << "," << last << endl;
    return 0;
}