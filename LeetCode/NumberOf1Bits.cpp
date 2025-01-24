#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int count = 0;
    while (n != 0)
    {
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}

int main()
{
    int number1 = 1234;
    int number2 = 10;
    int number3 = 2;
    int number4 = 7;
    cout << "No. of set bits are: \n"
         << number1 << ": " << hammingWeight(number1) << "\n"
         << number2 << ": " << hammingWeight(number2) << "\n"
         << number3 << ": " << hammingWeight(number3) << "\n"
         << number4 << ": " << hammingWeight(number4);
    return 0;
}