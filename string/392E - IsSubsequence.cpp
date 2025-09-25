/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 392. Is Subsequence
Category: Two Pointers / String / Dynamic Programming
Dif: Easy

Problem: 
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) 
of the characters without disturbing the relative positions of the remaining characters. 
(i.e., "ace" is a subsequence of "abcde" while "aec" is not).


Needed time: ~
Submissions: 7 
Working submissions: 4
First - last submission: 22 - 22.9.25

Runtime: 0ms - Beats 100%
Memory: 8.46mb - Beats 89.96%
*/

#include <string>

using namespace std; 


bool isSubsequence(string& s, string& t) {

    if(s.length() == 0) 
        return true;

   int i = 0, a = 0; 

   for(; i < s.length(); i++) {    
        for(; a < t.length(); a++) {    
            if(s[i] == t[a]) {
                if(i == s.length() - 1) 
                    return true;

                a++;
                break;
            }
        }
    }

    return false; 
}