/*
    给定一个非负整数数组 nums ，你最初位于数组的 第一个下标 。
    数组中的每个元素代表你在该位置可以跳跃的最大长度。
    判断你是否能够到达最后一个下标。
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target = nums.size() - 1;
        for(int i = target - 1; i >= 0; i--) {
            if(nums[i] + i >= target) {
                target = i;
            }
        }

        if(target == 0) {
            return true;
        }
        return false;
    }
};
