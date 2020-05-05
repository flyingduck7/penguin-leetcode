#pragma once
#include "common.h"

namespace P0007
{
    class Solution {
    public:
        static constexpr int MAX_LIMIT = INT_MAX / 10;
        static constexpr int MIN_LIMIT = INT_MIN / 10;
        int reverse(int x) {
            int res = 0;
            while (x)
            {
                int digit = x % 10;
                x /= 10;
                if (res > MAX_LIMIT || (res == MAX_LIMIT && digit > 7)) return 0;
                if (res < MIN_LIMIT || (res == MIN_LIMIT && digit < -8)) return 0;
                res = res * 10 + digit;
            }
            return res;
        }
    };
}