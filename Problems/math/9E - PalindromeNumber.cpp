/*
Name: 9. Palindrome Number
Category: Math
Dif: Easy

Problem: 
You are a product manager and currently leading a team to develop a new product. 


Needed time: 20m
Submissions: 2
Working submissions: 1
First - last submission: 10 - 10.1.25

Runtime: 0ms - Beats 100%
Memory: 8.58mb - Beats 67.6%
*/

using namespace std; 


bool isPalindrome(int& x) {
    if(x < 0) //negative numbers cant be a Palindrome
        return false; 

    long n = x, rev = 0;

    while(n > 0) {
      rev = rev * 10 + n % 10; //rev * 10 makes sure, n % 10 gets added to the end of rev, and not just added to the value of rev. 
      n /= 10;                 //n /= 10 removes the last number of n
    }                          //example: 352 
                               //
                               //run      rev value      n % 10       calculation 
                               //
    return x == rev;           //1          0              2            0 * 10 = 0 => 0 + 2 = 2
                               //2          2              5            2 * 10 = 20 => 20 + 5 = 25 
}                              //3          25             3            25 * 10 = 250 => 250 + 3 = 253
    
