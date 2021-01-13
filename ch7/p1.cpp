#include <iostream>
#include <string>

using namespace std;

void sort2(double* p, double* q)
{
    if(*p > *q)
    {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main()
{
    double x = 123.9, y = 12.4;
    cout << "Before:" << endl;
    cout << "x: "<<x<<" y: "<<y<<endl;
    sort2(&x,&y);
    cout << "After:" << endl;
    cout << "x: "<<x<<" y: "<<y<<endl;


    return 0;
}