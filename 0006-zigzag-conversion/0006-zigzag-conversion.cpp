class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string res;
        int increment = (numRows - 1) * 2;

        for (int r = 0; r < numRows; r++) {
            for (int i = r; i < s.length(); i += increment) {
                res += s[i];
                int midIdx = i + increment - 2 * r;
                if (r != 0 && r != numRows - 1 && midIdx < s.length()) {
                    res += s[midIdx];
                }
            }
        }

        return res;
    }
};