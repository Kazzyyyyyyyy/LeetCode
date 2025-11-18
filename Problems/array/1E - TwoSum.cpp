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
Submissions: 12 
Working submissions: 12
First - last submission: 17 - 17.9.25
(update: 4.11.25)

Runtime: 1ms - Beats 77.56%
Memory: 14.79mb - Beats 52.01%
*/

//im too lazy to comment, im sry

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int,int> mp;
  
  for(int i = 0; i < nums.size(); i++) {
    int x = target - nums[i];
    if(mp.count(x))
      return { mp[x], i };
      
    mp[nums[i]] = i;
  }

  throw logic_error("target not found");
}