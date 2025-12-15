// Program to find the sum of first five natural numbers using while loop

#include <iostream>
using namespace std;
int main() 
{
    int count = 1;
    int sum = 0;

    while (count <= 5) {
    sum = sum + count;
    count++;
    }
    cout << "Sum of first 5 natural numbers is: " << sum << endl;

    return 0;
}
