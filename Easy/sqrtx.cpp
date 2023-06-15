#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x <= 1)
        {
            return x;
        }
        long left = 1;  // Start with the left boundary as 1
        long right = x; // Start with the right boundary as x

        while (left <= right)
        {
            long mid = left + (right - left) / 2; // Calculate the middle value

            if (mid * mid == x)
            {
                return mid; // Found the exact square root
            }
            else if (mid * mid < x)
            {
                left = mid + 1; // Search in the right half
            }
            else
            {
                right = mid - 1; // Search in the left half
            }
        }

        // If the loop ends without finding the exact square root, return the floor value of the last mid
        return right;
    }
};