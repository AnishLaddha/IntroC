//Anish Laddha Period 2 
//Chapter 5
//Problem 5.3, smallest number and average number
#include <iostream>
using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);
int main()
{
    int num1, num2, num3;
    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;
    cout << "Enter num3: " << endl;
    cin >> num3;
    
    int TF;
    cout<<"Smallest num: 0"<< endl;
    cout<<"average: 1"<< endl;
    cin >> TF;
    if(TF== 0)
    {
        cout << "Smallest number is: " << smallest(num1,num2,num3) << endl;
    }
    else
    {
        cout << "Average is: " << average(num1,num2,num3) << endl;
    }
    
    
    
}

double smallest(double x, double y, double z)
{
    int smallest = x;
    if (y<smallest)
    {
        smallest = y;
    }
    if (z<smallest)
    {
        smallest =z;
    }
    return smallest;
}
double average(double x, double y, double z)
{
    double ave =((double) x + (double) y + (double) z)/3.0;
    return ave;
}
