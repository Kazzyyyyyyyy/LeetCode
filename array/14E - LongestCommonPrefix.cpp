/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 14. Longest Common Prefix
Category: Array / String / Trie
Dif: Easy

Problem: 
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".


Needed time: ~
Submissions: 13
Working submissions: 1
First - last submission: 17 - 18.9.25

Runtime: 0ms - Beats 100%
Memory: 11.8mb - Beats 68.02%
*/

#include <string>
#include <vector>

using namespace std; 


string longestCommonPrefix(vector<string>& strs) {
    int longestSt = 0, lsIndex = 0, r = 0; 
    string prefix; 

    if(strs.size() == 1) 
        return strs[0];

    for(string& s : strs) {
        if(s.size() > longestSt) {
            longestSt = s.size(); 
            lsIndex = r; 
        }
        r++; 
    }

    for(int c = 0; c < longestSt; c++) {
        for(int i = 0; i < strs.size(); i++) {
            if(i == lsIndex) continue;
            if(strs[lsIndex][c] == strs[i][c]) {
                if(prefix.length() <= c) 
                    prefix += strs[lsIndex][c];
                
                continue; 
            }
            
            if(prefix.length() > c) 
                prefix.erase(c);

            return prefix; 
        }
    }

    return prefix;
}