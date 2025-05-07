class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";        
        
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].empty()) return "";

            if (prefix.size() > strs[i].size()) {
                prefix.erase(prefix.begin() + strs[i].size(), prefix.end());
            }

            for (int j = 0; j < strs[i].size(); j++) {
                if (prefix[j] != strs[i][j]) {
                    prefix.erase(prefix.begin() + j, prefix.end());
                    break;
                }
            }
            if (prefix.empty()) return "";
        }
        return prefix;
    }
};