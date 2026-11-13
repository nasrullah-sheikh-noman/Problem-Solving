public class Solution {
    public int FinalValueAfterOperations(string[] operations) {
      int ans = 0;
      for(int i = 0; i < operations.Length; i++) {
        if(operations[i] == "X++") ans++;
        else if(operations[i] == "X--") ans--;
        else if(operations[i] == "++X") ans++;
        else if(operations[i] == "--X") ans--;
      }
      return ans;
    }
}