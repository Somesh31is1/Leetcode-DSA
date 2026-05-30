# Majority Element

## Problem Statement
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

## Example
Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
## My Approach
Problem is solved by storing the frequency of each element in the hashmap in the form of element as a key, its frequency in array as value
1. Create unordered_map having key, value as integers
2. Use for-each loop, for each element in the array, increase its count value in the hashmp by 1
   ex. if num = 2;
   do, hashmap[2]++, It automatically creates '2' as a key at index 2, updates its value to 1
   again, if num=2;
   hashmap[2]++, updates value to 2
3. Majority element is the element that has count > n/2
   Use for-each again, for every pair (key-value) in hashmap, if pair.second > nums.size()/2, then return pair.first
   i.e. If the second part of a pair in hashmap (value) is bigger than n/2, then return the first part of that pair (key)
4. If still anything doesn't work out as fair, return -1

## Animation Style Walkthrough

Input:

nums = [2,2,1,1,1,2,2]
Start

Map:

{}
Step 1

Pointer →

[2] 2 1 1 1 2 2

Execute:

freq[2]++;

Map:

{
 2 -> 1
}
Step 2

Pointer →

2 [2] 1 1 1 2 2

Execute:

freq[2]++;

Map:

{
 2 -> 2
}
Step 3

Pointer →

2 2 [1] 1 1 2 2

Map:

{
 2 -> 2
 1 -> 1
}
Step 4

Pointer →

2 2 1 [1] 1 2 2

Map:

{
 2 -> 2
 1 -> 2
}
Step 5

Pointer →

2 2 1 1 [1] 2 2

Map:

{
 2 -> 2
 1 -> 3
}
Step 6

Pointer →

2 2 1 1 1 [2] 2

Map:

{
 2 -> 3
 1 -> 3
}
Step 7

Pointer →

2 2 1 1 1 2 [2]

Map:

{
 2 -> 4
 1 -> 3
}
Final Check

Array size:

n = 7

Half:

n/2 = 3

Map:

2 -> 4
1 -> 3

Check:

4 > 3 ✓

Therefore:

return 2;

✅ Answer = 2
