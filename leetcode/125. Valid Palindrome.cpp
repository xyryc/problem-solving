class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (char c : s) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {
                result += tolower(c);
            }
        }

        cout << "Text:" << result << "~" << s << endl;

        int left = 0;
        int right = result.length() - 1;

        while (left < right) {
            if (result[left] != result[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};