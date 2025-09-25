/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 2404. Most Frequent Even Element
Category: Array / Hash Table / Counting / Weekly Contest 310
Dif: Easy

Problem: 
Given an integer array nums, return the most frequent even element.
If there is a tie, return the smallest one. If there is no such element, return -1.


Needed time: ~
Submissions: 2 
Working submissions: 2
First - last submission: 19 - 19.9.25

Runtime: 5ms - Beats 97.14% 
Memory: 34.35mb - Beats 95.88%
*/

#include <vector>
#include <algorithm>

using namespace std; 


int mostFrequentEven(vector<int>& nums) {

    if(nums.empty()) 
        return -1;

    sort(nums.begin(), nums.end());

    int majoEven = -1, majoEvenCount = 0, currEven = -1, currEvenCount = 0; 
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] % 2 != 0) 
            continue;
        
        if(currEven == -1) {
            currEven = nums[i];
            currEvenCount++; 
            continue;
        }
        
        if(nums[i] == currEven) {
            currEvenCount++; 
            continue;
        }

        if(majoEvenCount < currEvenCount) {
            majoEven = currEven; 
            majoEvenCount = currEvenCount; 
        }
        
        currEven = nums[i]; 
        currEvenCount = 1; 
    }

    if(majoEven == -1 || majoEvenCount < currEvenCount) 
        majoEven = currEven;
    
    return majoEven;
}