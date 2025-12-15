// Program to display multiplication table using while loop

#include <iostream>
using namespace std;
int main() 
{
    int i = 1;
    int number;
    cout << "Enter a number to print its table: ";
    cin >> number;

    while (i <= 10) {
    cout << number << " x " << i << " = " << number * i << endl;
    i++;
    }

    return 0;
}

