// Runtime   0 ms Beats 100.00%
// Memory 9.92 MB Beats 94.23%

class Solution {
public:
    int romanToInt(string s) {
        int s_length = s.length();
        int num = 0;
        for (int i=0; i < s_length; i++){
            if (s[i] == 'I')
            {
                num += 1;
            }
            if (s[i] == 'V')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'I')
                    {
                        num -= 2;
                    }
                }
                num += 5;
            }
            if (s[i] == 'X')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'I')
                    {
                        num -= 2;
                    }
                }
                num += 10;
            }
            if (s[i] == 'L')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'X')
                    {
                        num -= 20;
                    }
                }
                num += 50;
            }
            if (s[i] == 'C')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'X')
                    {
                        num -= 20;
                    }
                }
                num += 100;
            }
            if (s[i] == 'D')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'C')
                    {
                        num -= 200;
                    }
                }
                num += 500;
            }
            if (s[i] == 'M')
            {
                if (i != 0)
                {
                    if (s[i-1] == 'C')
                    {
                        num -= 200;
                    }
                }
                num += 1000;
            }
        }
    return num;
    }
};
