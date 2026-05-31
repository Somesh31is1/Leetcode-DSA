# Top K Frequent Elements

## Problem Statement
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

## Example


```
Example 1:

Input: nums = [1,1,1,2,2,3], k = 2

Output: [1,2]

Example 2:

Input: nums = [1], k = 1

Output: [1]

Example 3:

Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2

Output: [1,2]

 
```

## My Approach
This question asks to give the top 'k' numbers, who have maximum occurence in the array

Concept - Use a Hashmap to store the frequencies of all numbers, create another vector array to store the pairs from hashmap in reverse order i.e. (freq, number), as we want to sort the numbers as per their
frequencies, so in that array, sort the pairs, sorting checks the first parameter from the pair i.e. frequency, create answer array, use for loop till 'k' on array, push the second parameter from pair i.e. number 
into the answer array

Steps:
1. Create unordered_map, to store int,int as number and their frequency
2. Update the count for each number in array
3. Create another vector array
4. Store all pairs from map into array, reversing the pairs, keeping frequency first and number second
ex. if pair = (2,3) here number 2 appears 3 times
    in array, push this pair as (3,2), frequency part should come first, as we want to sort those pairs as per their frequency, so to compare them
    it is necessary to keep frequency before
5. Use sort method -  sort(arr.begin(), arr.end(), greater<pair<int,int>>()); in descending order
6. Create answer array
7. Use for(i=0;i<k;i++) on answer array, do answer = push_back(arr[i].second);
    This pushes back the number from the pair, till the loop ends, top 'k' elements having high frequencies are added in answer array
8. Return answer array

## Animation Style Walkthrough

Input:

nums = [1,1,1,2,2,3]
k = 2
Frequency Building
Frame 1

Pointer →

[1] 1 1 2 2 3

Map:

1 -> 1
Frame 2

Pointer →

1 [1] 1 2 2 3

Map:

1 -> 2
Frame 3

Pointer →

1 1 [1] 2 2 3

Map:

1 -> 3
Frame 4

Pointer →

1 1 1 [2] 2 3

Map:

1 -> 3
2 -> 1
Frame 5

Pointer →

1 1 1 2 [2] 3

Map:

1 -> 3
2 -> 2
Frame 6

Pointer →

1 1 1 2 2 [3]

Map:

1 -> 3
2 -> 2
3 -> 1
Build Pair Vector

Store:

(3,1)
(2,2)
(1,3)
Sort

After sorting:

(3,1)
(2,2)
(1,3)
Take First K

K = 2

Take:

(3,1)
(2,2)

Extract numbers:

1
2

Answer:

[1,2]
