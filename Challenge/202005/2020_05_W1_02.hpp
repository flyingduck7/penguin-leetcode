#pragma once
#include "common.h"
using namespace std;

/*
Jewels and Stones (https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/)

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
Each character in S is a type of stone you have.
You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: J = "aA", S = "aAAbbbb"
Output: 3

Example 2:
Input: J = "z", S = "ZZ"
Output: 0

Note:
S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

namespace C2005_W1_P02
{
    class Solution {
    public:
        bool stones[150] = { false, };
        int numJewelsInStones(string J, string S) {
            int Jlen = J.length();
            int Slen = S.length();
            for (int i = 0; i < Jlen; ++i) {
                stones[J[i]] = true;
            }

            int cnt = 0;
            for (int i = 0; i < Slen; ++i) {
                if (stones[S[i]]) cnt++;
            }

            return cnt;
        }
    };
}

