class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // code here
        int cnt = 0;
        for(int val: arr) {
            if(val==x) cnt++;
        }
        return cnt;
    }
};