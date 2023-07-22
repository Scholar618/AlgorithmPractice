/*
  给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
*/
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // 宽和高的长度
        int width = grid[0].size();
        int high = grid.size();

        if(width == 0 || high == 0) return 0;
        // 初始化
        for(int i = 1; i < width; i++) {
            grid[0][i] += grid[0][i-1];
        }
        for(int j = 1; j < high; j++) {
            grid[j][0] += grid[j-1][0];
        }

        for(int i = 1; i < high; i++) {
            for(int j = 1; j < width; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[high-1][width-1];
    }
};
