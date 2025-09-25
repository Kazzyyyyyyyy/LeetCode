/*
Note: I solved this problem before I made the decision to document it all, so i got no data like how much time it took me 


Name: 278. First Bad Version
Category: Binary Search / Interactive
Dif: Easy

Problem: 
You are a product manager and currently leading a team to develop a new product. 
Unfortunately, the latest version of your product fails the quality check. 
Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version.
You should minimize the number of calls to the API.


Needed time: ~
Submissions: 7 
Working submissions: 4
First - last submission: 23 - 23.9.25

Runtime: 0ms - Beats 100%
Memory: 7.85mb - Beats 68.97%
*/

#include <stdexcept>

using namespace std;


bool isBadVersion(int) {} //placeholder, actual function is from leetcode

int firstBadVersion(int& n) {
    if(n == 1) 
        return n;
    
    long bad = n, good = 0;

    while(true) {
        if(bad - 1 == good) 
            return bad;

        long calc = good + bad;
        long check = calc / 2;

        if(isBadVersion(check)) {
            bad = check;
            continue; 
        }

        good = check;        
    }

    throw logic_error("should not reach here");
}
