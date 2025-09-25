/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 169. Majority Element
Category: Array / Hash Table / Divide and Conquer / Sorting / Counting
Dif: Easy

Problem: 
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.


Needed time: ~
Submissions: 2
Working submissions: 2
First - last submission: 19 - 19.9.25

Runtime: 0ms - Beats 100%
Memory: 28.29mb - Beats 28.47%
*/

#include <vector>
#include <algorithm>

using namespace std; 


int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        return nums[nums.size()/2];
}