/*
 *给定一个长度为 n 的 0 索引整数数组 nums。初始位置为 nums[0]。
 *每个元素 nums[i] 表示从索引 i 向前跳转的最大长度。换句话说，如果你在 nums[i] 处，你可以跳转到任意 nums[i + j] 处:
 */
class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums[0], i = 0;
        int begin = i, max = 0;
        int ans = 0, count = 0;
        if(nums.size() == 0 || nums.size() == 1) return 0;
        while(len + begin < nums.size()-1) {
            for(i = begin; i <= len + begin; i++) {
                if(nums[i] + i > max) {
                    max = nums[i] + i;
                    ans = i;
                }
            }
            len = nums[ans];
            begin = ans;
            count++;
        }
        if(len + begin >= nums.size()-1) count++;
        return count;
    }
};
