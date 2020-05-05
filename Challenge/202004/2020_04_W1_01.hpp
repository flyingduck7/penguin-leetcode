#pragma once
#include "common.h"
using namespace std;

/*
Single Number (https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/)

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:
Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
*/

namespace C2004_W1_P01
{
    class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int sum = 0;
            for (auto i = nums.begin(); i < nums.end(); ++i) {
                sum ^= *i;
            }
            return sum;
        }
    };
}

