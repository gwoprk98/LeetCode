class Solution {
public:
    vector<string> ans;
    void dfs(int open, int close, int n, string str) {
        if (str.size() == n * 2) {
            ans.push_back(str);
            return;
        }
        if (open < n) {
            dfs(open + 1, close, n, str + "(");
        }
        if (close < open) {
            dfs(open, close + 1, n, str + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        dfs(0, 0, n, "");
        return ans;
    }
};