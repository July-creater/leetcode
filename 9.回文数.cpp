/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

#include <cmath>
#include <iostream>
// @lc code=start
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }

    if (x < 10) {
      return true;
    }

    if (!std::floor(x / 10)) {
      return false;
    }

    long long int num = 0;
    long long int origin = x;
    while (origin > 0) {
      num += (origin - std::floor(origin / 10) * 10);
      if (num == x) {
        return true;
      }
      num *= 10;

      origin = std::floor(origin / 10);
    }

    return false;
  }
};
// @lc code=end
