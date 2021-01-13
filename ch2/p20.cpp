#include <iostream>
#include <string>

using namespace std;
int main(){
    int usr_int;
    cout << "Enter a number 0 -> 99999: "<< endl;
    cin >> usr_int;
    int d1 = usr_int/10000;
    int d2 = usr_int%10000/1000;
    int d3 = usr_int%1000/100;
    int d4 = usr_int%100/10;
    int d5 = usr_int%10;

    cout << "\n Here are your digits" << endl;
    cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << endl;
    
}