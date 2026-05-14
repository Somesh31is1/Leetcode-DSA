# Valid Anagram

## Problem Statement
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

## My Approach
Anagram:- Anagram is defined when 2 strings have same characters, maybe in the same sequence or in different order.
for ex: racecar and carrace, cat and act etc.

Steps to solve the problem:
1. Check if length of 2 strings is equal, if not, return false
2. The main concept used in this question is to match the count of a specific 'character' between both strings
3. Create an array of 26 indices in order to insert the count value of characters from 'a' to 'z'
4. Use for loop on the first string:-
    Check: array[s[i]-'a']++,
           i.e. s[i]-'a' gives the index of that particular character, as s[i]-'a' gives ascii subtraction 
          of that character - 97 i.e. ascii code of 'a'
          ex. if s[i] = 'c', so 'c'-'a' = 99-97 = 2
          so at array[2] i.e. at the index of 'c' the count will be 1, because 'c' appeared once
          Keep increasing the count for other characters as well

    For the second string, decrement the count for that particular variable t[i], to cancel out with that of s[i],
          so count[t[i]-'a']--, for ex. if t[i]='c', so 'c'-'a'=99-97=2, so count[2] is actually 2 from the upper string,
          so decrement the count to 2-1=1, again decrement during the second time 'c' appears, so count[2]=0

5.When the count of all the letters present in both strings become 0 at their indexes return true
Run a for loop to check weather count[i]!=0, then return false
