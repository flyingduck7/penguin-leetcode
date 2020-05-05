#pragma once
#include "common.h"

namespace P0008
{
    class Solution {
    public:
        static constexpr int MAX_LIMIT = INT_MAX / 10;
        static constexpr int MIN_LIMIT = INT_MIN / 10;
        int myAtoi(std::string str) {
            int size = str.length();
            int res = 0;
            for (auto i = str.begin(); i < str.end(); ++i)
            {
                if (*i >= '0' && *i <= '9')
                {
                    if (res > )
                    res *= 10;
                    res += (*i - '0');
                }
            }

            return res;
        }
    };
}