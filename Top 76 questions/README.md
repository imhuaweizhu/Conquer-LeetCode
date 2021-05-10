# Main Reference:
1. [New Year Gift - Curated List of Top 75 LeetCode Questions to Save Your Time](https://www.teamblind.com/post/New-Year-Gift---Curated-List-of-Top-75-LeetCode-Questions-to-Save-Your-Time-OaM1orEU)
2. [How I Got Good at Coding Interviews](https://www.youtube.com/watch?v=SVvr3ZjtjI8)


## ARRAY (10 questions in total)

### 1. [Two sum](https://leetcode.com/problems/two-sum/)

#### *Analysis*

The array is not sorted, so we can’t use two-pointers. Let’s say we have [1,2,2,7] with a target of 9. Say we start with 1 again. Let’s ask a simple question, what number must be added to 1 to get a value of 9. To find this, we simply take 9–1 = 8, so the answer is 8. Then we can employ a hashtable to find 8 which only takes O(1). So in total, the time complexity is O(N).

#### *Solution*

Step 1: Iterate the array to add all the numbers to a hash table.

Step 2: Iterate the array a second time, this time taking the current number, determining what needs to be added to reach the target, and checking if that exists in the hash table. If it does exist and isn’t the same index as the current number, we are done. Otherwise, we check the next number in the list.

### 2. [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

#### *Analysis*
Brute force is O(N^2).
h<sub>&theta;</sub>(x) = &theta;<sub>o</sub> x + &theta;<sub>1</sub>x

#### *Solution*

### 3. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

#### *Analysis*

#### *Solution*

### 4. [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

#### *Analysis*

#### *Solution*

### 5. [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

#### *Analysis*

#### *Solution*

### 6. [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

#### *Analysis*

#### *Solution*

### 7. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

#### *Analysis*

#### *Solution*

### 8. [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

#### *Analysis*

#### *Solution*

### 9. [3 Sum](https://leetcode.com/problems/3sum/)

#### *Analysis*

#### *Solution*

### 10. [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

#### *Analysis*

#### *Solution*

## BINARY (5 questions in total)

### 1. [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)

#### *Analysis*

#### *Solution*

### 2. [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)

#### *Analysis*

#### *Solution*

### 3. [Counting Bits](https://leetcode.com/problems/counting-bits/)

#### *Analysis*

#### *Solution*

### 4. [Missing Number](https://leetcode.com/problems/missing-number/)

#### *Analysis*

#### *Solution*

### 5. [Reverse Bits](https://leetcode.com/problems/reverse-bits/)

#### *Analysis*

#### *Solution*

## DYNAMIC PROGRAMMING (11 questions in total)

### 1. [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)

#### *Analysis*

#### *Solution*

### 2. [Coin Change](https://leetcode.com/problems/coin-change/)

#### *Analysis*

#### *Solution*

### 3. [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)

#### *Analysis*

#### *Solution*

### 4. [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)

#### *Analysis*

#### *Solution*

### 5. [Word Break Problem](https://leetcode.com/problems/word-break/)

#### *Analysis*

#### *Solution*

### 6. [Combination Sum](https://leetcode.com/problems/combination-sum/)

#### *Analysis*

#### *Solution*

### 7. [House Robber](https://leetcode.com/problems/house-robber/)

#### *Analysis*

#### *Solution*

### 8. [House Robber II](https://leetcode.com/problems/house-robber-ii/)

#### *Analysis*

#### *Solution*

### 9. [Decode Ways](https://leetcode.com/problems/decode-ways/)

#### *Analysis*

#### *Solution*

### 10. [Unique Paths](https://leetcode.com/problems/unique-paths/)

#### *Analysis*

#### *Solution*

### 11. [Jump Game](https://leetcode.com/problems/jump-game/)

#### *Analysis*

#### *Solution*

## GRAPH (8 questions in total)

### 1. [Clone Graph](https://leetcode.com/problems/clone-graph/)

#### *Analysis*

#### *Solution*

### 2. [Course Schedule](https://leetcode.com/problems/course-schedule/)

#### *Analysis*

#### *Solution*

### 3. [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)

#### *Analysis*

#### *Solution*

### 4. [Number of Islands](https://leetcode.com/problems/number-of-islands/)

#### *Analysis*

#### *Solution*

### 5. [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

#### *Analysis*

#### *Solution*

### 6. [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)

#### *Analysis*

#### *Solution*

### 7. [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)

#### *Analysis*

#### *Solution*

### 8. [Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)

#### *Analysis*

#### *Solution*

## INTERVAL (5 questions in total)

### 1. [Insert Interval](https://leetcode.com/problems/insert-interval/)

#### *Analysis*

#### *Solution*

### 2. [Merge Intervals](https://leetcode.com/problems/merge-intervals/)

#### *Analysis*

#### *Solution*

### 3. [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)

#### *Analysis*

#### *Solution*

### 4. [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)

#### *Analysis*

#### *Solution*

### 5. [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)

#### *Analysis*

#### *Solution*

## LINKED LIST (6 questions in total)

### 1. [Reverse a Linked List](https://leetcode.com/problems/reverse-linked-list/)

#### *Analysis*

#### *Solution*

### 2. [Detect Cycle in a Linked List](https://leetcode.com/problems/linked-list-cycle/)

#### *Analysis*

#### *Solution*

### 3. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

#### *Analysis*

#### *Solution*

### 4. [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

#### *Analysis*

#### *Solution*

### 5. [Remove Nth Node From End Of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

#### *Analysis*

#### *Solution*

### 6. [Reorder List](https://leetcode.com/problems/reorder-list/)

#### *Analysis*

#### *Solution*

## MATRIX (4 questions in total)

### 1. [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

#### *Analysis*

#### *Solution*

### 2. [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

#### *Analysis*

#### *Solution*

### 3. [Rotate Image](https://leetcode.com/problems/rotate-image/)

#### *Analysis*

#### *Solution*

### 4. [Word Search](https://leetcode.com/problems/word-search/)

#### *Analysis*

#### *Solution*

## STRING (10 questions in total)

### 1. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

#### *Analysis*

#### *Solution*

### 2. [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)

#### *Analysis*

#### *Solution*

### 3. [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)

#### *Analysis*

#### *Solution*

### 4. [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

#### *Analysis*

#### *Solution*

### 5. [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

#### *Analysis*

#### *Solution*

### 6. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

#### *Analysis*

#### *Solution*

### 7. [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

#### *Analysis*

#### *Solution*

### 8. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

#### *Analysis*

#### *Solution*

### 9. [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)

#### *Analysis*

#### *Solution*

### 10. [Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/)

#### *Analysis*

#### *Solution*

## TREE (14 questions in total)

### 1. [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

#### *Analysis*

#### *Solution*

### 2. [Same Tree](https://leetcode.com/problems/same-tree/)

#### *Analysis*

#### *Solution*

### 3. [Invert/Flip Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

#### *Analysis*

#### *Solution*

### 4. [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

#### *Analysis*

#### *Solution*

### 5. [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

#### *Analysis*

#### *Solution*

### 6. [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)

#### *Analysis*

#### *Solution*

### 7. [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)

#### *Analysis*

#### *Solution*

### 8. [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

#### *Analysis*

#### *Solution*

### 9. [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

#### *Analysis*

#### *Solution*

### 10. [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

#### *Analysis*

#### *Solution*

### 11. [Lowest Common Ancestor of BST](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

#### *Analysis*

#### *Solution*

### 12. [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)

#### *Analysis*

#### *Solution*

### 13. [Add and Search Word](https://leetcode.com/problems/add-and-search-word-data-structure-design/)

#### *Analysis*

#### *Solution*

### 14. [Word Search II](https://leetcode.com/problems/word-search-ii/)

#### *Analysis*

#### *Solution*

## HEAP (3 questions in total)

### 1. [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

#### *Analysis*

#### *Solution*

### 2. [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

#### *Analysis*

#### *Solution*

### 3. [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)

#### *Analysis*

#### *Solution*
