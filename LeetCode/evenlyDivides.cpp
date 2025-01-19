#include <iostream>
using namespace std;

int evenlyDivides(int n)
{
    // code here
    int count = 0;
    int temp = n;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && temp % digit == 0)
            count += 1;
        n /= 10;
    }
    return count;
}

int main()
{
    int num1 = 101, num2 = 2344, num3 = 9807;
    cout << "Test Case 1: " << evenlyDivides(num1) << "\n Test Case 2: " << evenlyDivides(num2) << "\n Test Case 3: " << evenlyDivides(num3);
    return 0;
}