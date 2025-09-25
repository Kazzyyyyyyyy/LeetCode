/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 58. Length of Last Word
Category: String
Dif: Easy

Problem: 
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.



Needed time: ~
Submissions: 6
Working submissions: 3

First - last submission: 18 - 18.9.25
Runtime: 0ms - Beats 100%
Memory: 8.81mb - Beats 66.99%
*/

#include <iostream>
#include <string>

using namespace std; 


int lengthOfLastWord(string s) {
    
    int length = 0;

    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] != ' ') {
            length++;
            continue;
        }
        else if(length > 0) 
            return length; 
    }

     return length;
}