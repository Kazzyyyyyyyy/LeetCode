/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 
(and also, this was my very first experience with c++)


Name: 1. Two Sum
Category: Array / Hash Table
Dif: Easy

Problem: 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


Needed time: ~
Submissions: 2 
Working submissions: 2
First - last submission: 17 - 17.9.25

Runtime: 41ms - Beats 29.56%
Memory: 13.92mb - Beats 93.07%
*/

#include <vector>

using namespace std; 


vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        for(int a = i + 1; a < nums.size(); a++) {
            if(nums[i] + nums[a] == target) {
                return {i, a};
            }
        }
    }    

    return {0, 0}; //never gets here
}