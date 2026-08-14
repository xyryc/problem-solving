class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {

            int cur;

            if (s[i] == 'I') cur = 1;
            else if (s[i] == 'V') cur = 5;
            else if (s[i] == 'X') cur = 10;
            else if (s[i] == 'L') cur = 50;
            else if (s[i] == 'C') cur = 100;
            else if (s[i] == 'D') cur = 500;
            else cur = 1000;

            if (i + 1 < s.length()) {

                int next;

                if (s[i + 1] == 'I') next = 1;
                else if (s[i + 1] == 'V') next = 5;
                else if (s[i + 1] == 'X') next = 10;
                else if (s[i + 1] == 'L') next = 50;
                else if (s[i + 1] == 'C') next = 100;
                else if (s[i + 1] == 'D') next = 500;
                else next = 1000;

                if (cur < next)
                    total -= cur;
                else
                    total += cur;

            } else {
                total += cur;
            }
        }

        return total;
    }
};