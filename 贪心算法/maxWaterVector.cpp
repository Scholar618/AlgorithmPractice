/*
    给定一个长度为 n 的整数数组 height 。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i]) 。
    找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
    返回容器可以储存的最大水量。
    说明：你不能倾斜容器。
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        //if(height)
        int i = 0, j = height.size() - 1, ans = 0;
        int temp = 0;
        while(i < j) {
            temp = min(height[i], height[j]) * (j - i);
            ans = max(ans, temp);
            if(height[i] > height[j]) {
                j--;
            } else{
                i++;
            }
        }
        return ans;

    }
};
