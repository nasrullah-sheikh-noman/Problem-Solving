public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int ext) {
      int max = 0;
      for (int i = 0; i < candies.Length; i++) {
        if (candies[i] > max) max = candies[i];
      }
      IList<bool> ans = new List<bool>();
      for(int i = 0; i < candies.Length; i++) {
        int val = ext + candies[i];
        if(val >= max) {
          ans.Add(true);
        } else ans.Add(false);
      }
      return ans;
    }
}