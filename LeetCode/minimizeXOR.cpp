#include <iostream>
using namespace std;

// Helper function to count the number of set bits in an integer
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

int minimizeXOR(int num1, int num2)
{
    // Count the number of set bits in num2
    int setBitsInNum2 = countSetBits(num2);

    int x = 0;

    // Step 1: Set bits in x that align with num1, starting from the most significant bit
    for (int i = 31; i >= 0 && setBitsInNum2 > 0; --i)
    {
        if (num1 & (1 << i))
        {                    // Check if the ith bit of num1 is set
            x |= (1 << i);   // Set the ith bit of x
            --setBitsInNum2; // Decrease the count of remaining set bits
        }
    }

    // Step 2: If there are remaining set bits, set the least significant unset bits in x
    for (int i = 0; i < 32 && setBitsInNum2 > 0; ++i)
    {
        if ((x & (1 << i)) == 0)
        {                    // Check if the ith bit of x is unset
            x |= (1 << i);   // Set the ith bit of x
            --setBitsInNum2; // Decrease the count of remaining set bits
        }
    }

    return x;
}

int main()
{
    int num1 = 5, num2 = 10;
    cout << "Output: " << minimizeXOR(num1, num2) << endl;

    num1 = 3, num2 = 15;
    cout << "Output: " << minimizeXOR(num1, num2) << endl;

    return 0;
}