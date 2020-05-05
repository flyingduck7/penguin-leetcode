#pragma once
#include "common.h"
using namespace std;

/*
First Unique Character in a String (https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/)

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.

Note: You may assume the string contain only lowercase letters.
*/

namespace C2005_W1_P05
{
    class Solution {
    public:
        int charChk[150] = { 0, };
        int firstUniqChar(string s) {
            for (int i = 'a'; i <= 'z'; ++i) {
                charChk[i] = -1;
            }

            int sLen = s.length();
            for (int i = 0; i < sLen; ++i) {
                if (charChk[s[i]] == -1) {
                    charChk[s[i]] = i;
                }
                else if (charChk[s[i]] >= 0) {
                    charChk[s[i]] = -2;
                }
            }

            int idx = INT_MAX;
            for (int i = 'a'; i <= 'z'; ++i) {
                if ((charChk[i] >= 0) && (charChk[i] < idx)) {
                    idx = charChk[i];
                }
            }

            return (idx == INT_MAX) ? -1 : idx;
        }
    };
}

