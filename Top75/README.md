# Decipher and Conquer LeetCode Questions

Main Reference:
1. [New Year Gift - Curated List of Top 75 LeetCode Questions to Save Your Time](https://www.teamblind.com/post/New-Year-Gift---Curated-List-of-Top-75-LeetCode-Questions-to-Save-Your-Time-OaM1orEU)
2. [How I Got Good at Coding Interviews](https://www.youtube.com/watch?v=SVvr3ZjtjI8)


## ARRAY

### [Two sum](https://leetcode.com/problems/two-sum/), leetcode #1

#### *Analysis*

The array is not sorted, so we can’t use two-pointers. Let’s say we have [1,2,2,7] with a target of 9. Say we start with 1 again. Let’s ask a simple question, what number must be added to 1 to get a value of 9. To find this, we simply take 9–1 = 8, so the answer is 8. Then we can employ a hashtable to find 8 which only takes O(1). So in total, the time complexity is O(N).

#### *Solution*

Step 1: Iterate the array to add all the numbers to a hash table.

Step 2: Iterate the array a second time, this time taking the current number, determining what needs to be added to reach the target, and checking if that exists in the hash table. If it does exist and isn’t the same index as the current number, we are done. Otherwise, we check the next number in the list.

### [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/), leetcode #121

#### *Analysis*

#### *Solution*
