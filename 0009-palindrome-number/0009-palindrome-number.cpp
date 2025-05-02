class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }

            long dummyX = x;
            long reversedNum = 0;

            while (dummyX != 0) {
                reversedNum = reversedNum * 10 + dummyX % 10;
                dummyX /= 10;
            }

            return x == reversedNum;
        }
    };