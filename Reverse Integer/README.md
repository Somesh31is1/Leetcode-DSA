# Reverse Integer

## Problem Statement
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

## My Approach

Create an int variable 'rev' that stores reversed number, initially 0.

Till the actual number 'x' is fully processed, i.e. it turns 0, run the while loop:

 --> In while loop: 

1. Extract last digit of x: i.e. x mod 10

2. a. Check if reverse number is > INT_MAX/10 or < INT_MIN/10, if this happens, we cant multiply rev by 10 in order
to shift the digit in rev to tens place as overflow and underflow occurs respectively, so return 0

b. Do rev = rev*10 + digit, it shifts the digit in 'rev' variable to one place left, adds current digit to units place

3. Remove the number from original integer 'x' which is processed, do x=x/10
   
4. At last return 'rev'
