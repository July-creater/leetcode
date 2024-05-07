/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

#include <vector>
#include <unordered_map>
// @lc code=start
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
      std::unordered_map<int, int> num_map;
      std::vector<int> res;
      for (uint32_t i = 0; i < nums.size(); ++i) {
        num_map[target - nums.at(i)] = i;
      }
      for (uint32_t i = 0; i < nums.size(); ++i) {
        if (num_map.count(nums.at(i))) {
          res.emplace_back(i);
          res.emplace_back(num_map[nums.at(i)]);
          return res;
        }
      }
      return res;
    }
        
};
// @lc code=end
