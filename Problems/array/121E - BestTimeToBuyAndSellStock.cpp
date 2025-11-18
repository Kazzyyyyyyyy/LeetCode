/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 121. Best Time to Buy and Sell Stock
Category: Array / Dynamic Programming
Dif: Easy

Problem: 
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


Needed time: ~
Submissions: 28
Working submissions: 9
First - last submission: 21 - 21.9.25 
(update: 3.11.25)

Runtime: 0ms - Beats 100%
Memory: 97.27mb - Beats 86.87%
*/

#include <vector>
#include <algorithm>
 
using namespace std; 


int maxProfit(vector<int>& prices) {
  int s = prices.size(); 
  if(s < 2) 
    return 0;  
  
  int minPrice = prices[0];
  int maxProfit = 0;
 
  for(int i = 1; i < s; i++) {
    int currProfit = prices[i] - minPrice;
    maxProfit = max(maxProfit, currProfit);
    minPrice = min(minPrice, prices[i]);
  }

  return maxProfit;
}
