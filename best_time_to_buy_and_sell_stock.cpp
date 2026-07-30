// Best Time To Buy And Sell Stock

int maxProfit = 0, bestBuy = prices[0];
for (int i = 1; i < prices.size(); i++) {
  if(prices[i] > bestBuy) {
    maxProfit = max(maxProfit, prices[i] - bestBuy);
  }
  bestBuy = min(bestBuy, prices[i]);
}
return maxProfit;