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
