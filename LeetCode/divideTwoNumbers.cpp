#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor)
{
    if (dividend == 0)
        return 0;

    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX; // Handle overflow for 32-bit integers

    // Determine the sign of the result
    bool negative = (dividend < 0) != (divisor < 0);

    // Work with absolute values
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);

    long long quotient = 0;

    while (absDividend >= absDivisor)
    {
        long long tempDivisor = absDivisor, multiple = 1;

        // Double the divisor until it's greater than the remaining dividend
        while (absDividend >= (tempDivisor << 1))
        {
            tempDivisor <<= 1;
            multiple <<= 1;
        }

        // Subtract the largest multiple of the divisor
        absDividend -= tempDivisor;
        quotient += multiple;
    }

    // Apply the sign
    if (negative)
    {
        quotient = -quotient;
    }

    // Clamp the result to 32-bit signed integer range
    return max(min((int)quotient, INT_MAX), INT_MIN);
}

int main()
{
    int dividend = 7;
    int divisor = -3;
    int ans = divide(dividend, divisor);
    cout << dividend << "/" << divisor << " = " << ans << endl;
    return 0;
}