#pragma once
#include "common.h"

/*
Number Complement (https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/)

Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Example 1:
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

Note:
The given integer is guaranteed to fit within the range of a 32-bit signed integer.
You could assume no leading zero bit in the integer��s binary representation.
This question is the same as 1009: https://leetcode.com/problems/complement-of-base-10-integer/
*/

namespace C2005_W1_P04
{
    class Solution {
    public:
        int findComplement(int num) {
            int res = 0;
            int loc = 0;
            while (num) {
                bool digit = num & 1;
                res += !digit << (loc++);
                num = num >> 1;
            }
            return res;
        }
    };
}

