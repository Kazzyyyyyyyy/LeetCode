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
Submissions: 18
Working submissions: 5
First - last submission: 21 - 21.9.25

Runtime: 386ms - Beats 6.44%
Memory: 97.34mb - Beats 60.67%
*/

#include <vector>
#include <algorithm>
 
using namespace std; 


int maxProfit(const vector<int>& prices) {

    if(prices.size() < 2) 
        return 0; 
        
    int maxDiff = -1, min = -1; 

    for(int i = 0; i < prices.size(); i++) {
        if(min == -1 || prices[i] < min) {
            min = prices[i]; 

            int max = *max_element(prices.begin() + i, prices.end()); 
    
            if(maxDiff < (max - min)) 
                maxDiff = (max - min); 
            
        }
    }

    return maxDiff;
}