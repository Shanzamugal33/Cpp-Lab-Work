// Program to print all numbers from 1 to N using while loop
#include <iostream>
using namespace std;
int main() 
{
    int number, i = 1;

    cout << "Enter a positive number N: ";
    cin >> number;

    while (i <= number) {
    cout << i << " ";
    i++;
    }

    return 0;
}

