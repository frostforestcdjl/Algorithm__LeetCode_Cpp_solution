// Runtime   0 ms Beats 100.00%
// Memory 8.60 MB Beats  35.03%

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        if (x > 1000000000) {
            if (x%10 > 2){
                return false;
            }
        }
        int revrsed = 0;
        int temp = x;
        int digit;

        while (temp > 0) {
        revrsed = revrsed*10;
        digit = temp%10;
        revrsed += digit;

        temp = (temp-digit)*0.1;
        }
        if (revrsed == x) {
            return true;
        }
        return false;
    }
};
