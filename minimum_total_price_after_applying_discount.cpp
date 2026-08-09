class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
      sort(prices.rbegin(), prices.rend());
      sort(discounts.rbegin(), discounts.rend());
      double total = 0;
      int num_discounts = min(prices.size(), discounts.size());
      for(int i = 0; i < num_discounts; i++) {
        total += (double)prices[i] * (100 - discounts[i]) / 100.0;
      }
      for(int i = num_discounts; i < prices.size(); i++) {
        total+=(double)prices[i];
      }
      return total;
    }
};©leetcode