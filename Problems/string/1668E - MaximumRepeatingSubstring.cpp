/*
Name: 1668. Maximum Repeating Substring
Category: String / Dynamic Programming / String Matching / Biweekly Contest 40
Dif: Easy

Problem: 
For a string sequence, a string word is k-repeating if word concatenated k times is a substring of sequence. 
The word's maximum k-repeating value is the highest value k where word is k-repeating in sequence. 
If word is not a substring of sequence, word's maximum k-repeating value is 0.
Given strings sequence and word, return the maximum k-repeating value of word in sequence.


Needed time: 6h
Submissions: 14
Working submissions: 3
First - last submission: 24.9 - 1.10.25

Runtime: 0ms - Beats 100%
Memory: 9.08mb - Beats 18.96%
*/

#include <vector> 
#include <string>

using namespace std; 


int maxRepeating(string& sequence, string& word) {

  vector<int> rep ( sequence.length() );
																		
  for(int i = 0; i < sequence.length(); i++) {						   //word = "ab"
    if(sequence.compare(i, word.length(), word) == 0) 				   //compares the substr in sequence from i to i + word.length and checks if it equals "ab"
      rep[i] = (i >= word.length() ? rep[i - word.length()] : 0) + 1;  //if the substring (i => i + wl) is "ab" , we go word.length back in rep and add +1. 
  }																	   //"ab" can only be once in every "ab".length in sequence, and because we add +1 to the last index where "ab" couldve been, we get the longest chain

  return *max_element(rep.begin(), rep.end());                         //we return the max value of rep, because that is the longest chain of "ab" in sequence
}