class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        int result = 0;
        
        // 1. 선행 공백 무시
        while (i < s.length() && isspace(s[i])) {
            i++;
        }
        
        // 2. 부호 확인
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // 3. 숫자 읽기 및 변환
        while (i < s.length() && isdigit(s[i])) {
            
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + (s[i] - '0');
            i++;
        }
        
        return result * sign;
    }
};