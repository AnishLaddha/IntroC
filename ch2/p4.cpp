//  Anish Laddha
//  September 10
//  Lab 2
//  takes 2 nums as input, and gives sum diffference, product and average


#include <iostream>
#include <string>

using namespace std;
int main(){
    int num1;
    int num2;
    int sum;
    int diff;
    int product;
    double average;

    cout << "Enter num1: " << endl;
    cin >> num1;
    cout << "Enter num2: " << endl;
    cin >> num2;

    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;
    average = (double)num1 / (double) num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;

    return 0;
}