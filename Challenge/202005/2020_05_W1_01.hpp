#pragma once
#include "common.h"

/*
First Bad Version (https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/)

You are a product manager and currently leading a team to develop a new product. 
Unfortunately, the latest version of your product fails the quality check. 
Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which will return whether version is bad. 
Implement a function to find the first bad version. You should minimize the number of calls to the API.

Example:
Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version.
*/

namespace C2005_W1_P01
{
    // The API isBadVersion is defined for you.
    // bool isBadVersion(int version);
    bool isBadVersion(int version) {
        return (version >= 4) ? true : false;
    }

    class Solution {
    public:
        int firstBadVersion(int n) {
            int firstBad = n;
            int lastGood = 0;
            long long idx = (firstBad + lastGood) / 2;
            while (1) {
                bool chk = isBadVersion(static_cast<int>(idx));
                if (chk == true) {
                    firstBad = static_cast<int>(idx);
                    idx = (lastGood + idx) >> 1;
                }
                else {
                    lastGood = static_cast<int>(idx);
                    idx = (firstBad + idx) >> 1;
                }
                if (firstBad - lastGood == 1) break;
            }
            return firstBad;
        }
    };
}

