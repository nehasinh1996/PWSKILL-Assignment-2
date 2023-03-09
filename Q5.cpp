#include<iostream>
using namespace std;
int main()
{
    int n, no_1,no_2,no_3,sum;
    n = 123;

    no_1 = n/100; 
    n = n%100;
    no_2 = n/10;
    no_3 = n%10; 
    sum = no_1 + no_2 + no_3;
    cout << "sum of 3 number is: " << sum;
    return 0;
}