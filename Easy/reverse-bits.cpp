#include <cstdint>

uint32_t reverseBits(uint32_t n) {
    uint32_t reversed = 0;
    int bitsRemaining = 32;
    
    while (bitsRemaining--) {
        reversed <<= 1; // Left shift the reversed bits by one position
        
        if (n & 1) {
            reversed |= 1; // Set the rightmost bit of reversed if the corresponding bit in n is 1
        }
        
        n >>= 1; // Right shift n by one position
    }
    
    return reversed;
}
