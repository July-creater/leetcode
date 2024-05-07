/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (int i = 0; i < nums.size() - 1; ++i) {
      if (nums[i] != nums[i + 1]) {
        nums[j] = nums[i + 1];
        j++;
      }
    }
    return j;
  }
};
// @lc code=end
