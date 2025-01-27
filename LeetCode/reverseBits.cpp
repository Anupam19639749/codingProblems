#include <iostream>
#include <bitset>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;

    // Iterate through all 32 bits of the input
    for (int i = 0; i < 32; ++i) {
        // Shift result to the left to make room for the next bit
        result <<= 1;

        // Add the least significant bit of n to result
        result |= (n & 1);

        // Shift n to the right to process the next bit
        n >>= 1;
    }

    return result;
}

int main() {
    // Example input
    uint32_t n1 = 0b00000010100101000001111010011100; // 43261596
    uint32_t n2 = 0b11111111111111111111111111111101; // 4294967293

    // Call reverseBits and print the results
    uint32_t result1 = reverseBits(n1);
    uint32_t result2 = reverseBits(n2);

    cout << "Input:  " << bitset<32>(n1) << " -> Output: " << bitset<32>(result1) << " (" << result1 << ")" << endl;
    cout << "Input:  " << bitset<32>(n2) << " -> Output: " << bitset<32>(result2) << " (" << result2 << ")" << endl;

    return 0;
}
