#pragma once
#include "common.h"
using namespace std;

/*
Ransom Note (https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/)

Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.
Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

namespace C2005_W1_P03
{
    class Solution {
    public:
        int myMagazine[26] = { 0, };
        bool canConstruct(string ransomNote, string magazine) {
            int rLen = ransomNote.length();
            int mLen = magazine.length();
            for (int i = 0; i < mLen; ++i) {
                myMagazine[magazine[i] - 'a']++;
            }

            for (int i = 0; i < rLen; ++i) {
                int n = --myMagazine[ransomNote[i] - 'a'];
                if (n < 0) return false;
            }

            return true;
        }
    };
}
