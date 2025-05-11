
class Solution {
public:

    void expand(string s, int l, int r, int &bestLeft, int &bestRight) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        l++;
        r--;
        if (r-l+1 > bestRight-bestLeft+1) {
            bestLeft = l;
            bestRight = r;
        }
    }

    string longestPalindrome(string s) {
        
        int bestRight = 0;
        int bestLeft = 0;

        for (int i = 0; i < s.size(); i++) {
            expand(s,i,i,bestLeft,bestRight);

            expand(s,i,i+1,bestLeft,bestRight);
        }

        return s.substr(bestLeft, bestRight - bestLeft + 1);
    }
};