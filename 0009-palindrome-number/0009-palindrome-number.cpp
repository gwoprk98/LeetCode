class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int orinum = x;
        long revnum = 0;

        while (x > 0) {
            int digit = x % 10;
            revnum = revnum * 10 + digit;
            x /= 10;
        }
        
        return orinum == revnum;
    }
};