// 数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
class Solution {
public:
    void backTracking(int LRemain, int RRmain, string str, vector<string>& ans, int n) {
        if(str.length() == n*2) {
            ans.push_back(str);
            return;
        }
        if(LRemain > 0) {
            backTracking(LRemain - 1, RRmain, str + "(", ans, n);
        }
        if(RRmain > LRemain) {
            backTracking(LRemain, RRmain - 1, str + ")", ans, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backTracking(n, n, "", ans, n);
        return ans;
    }

};
