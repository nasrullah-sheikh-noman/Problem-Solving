class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        int tmp = n;
        while(tmp) {
            sum+=tmp%10;
            tmp/=10;
        }
        string s = to_string(sum);
        string st = s;
        reverse(s.begin(), s.end());
        return st==s;
    }
};