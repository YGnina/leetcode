# Notes
### Binary Search

Binary Search is generally composed of 3 main sections:

1. Pre-processing - Sort if collection is unsorted.

2. Binary Search - Using a loop or recursion to divide search space in half after each comparison.

3. Post-processing - Determine viable candidates in the remaining space.

**Template #1:** (left <= right)
- Most basic and elementary form of Binary Search
- Search Condition can be determined without comparing to the element's neighbors (or use specific elements around it)
- No post-processing required because at each step, you are checking to see if the element has been found. If you reach the end, then you know the element is not found

```
int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size() - 1;
  while(left <= right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){
        return mid;
    }
    else if(nums[mid] < target) {
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
  }

  // End Condition: left > right
  return -1;
}
```

**Template #2:** (left < right):
- An advanced way to implement Binary Search.    
- Search Condition needs to access the element's immediate right neighbor
- Use the element's right neighbor to determine if the condition is met and decide whether to go left or right
- Guarantees Search Space is at least 2 in size at each step
- Post-processing required. Loop/Recursion ends when you have 1 element left. Need to assess if the remaining element meets the condition.

```
int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size() - 1;
  while(left < right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid; }
  }

  // Post-processing:
  // End Condition: left == right
  if(nums[left] == target) return left;
  return -1;
}
```
**Template #3:** (left + 1 < right):
- An alternative way to implement Binary Search
- Search Condition needs to access element's immediate left and right neighbors
- Use element's neighbors to determine if the condition is met and decide whether to go left or right
- Guarantees Search Space is at least 3 in size at each step
- Post-processing required. Loop/Recursion ends when you have 2 elements left. Need to assess if the remaining elements meet the condition.

```
int binarySearch(vector<int>& nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left + 1 < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left + 1 == right
    if(nums[left] == target) return left;
    if(nums[right] == target) return right;
    return -1;
}
```
Runtime: O(log n)  Logarithmic Time
- Why log n?
    - Binary search is performed by dividing the existing array in half.
    - So every time you a call the subroutine ( or complete one iteration ) the size reduced to half of the existing part.
    - First N become N/2, then it become N/4 and go on till it find the element or size become 1.
    - The maximum no of iterations is log N (base 2).


Space: O(1)  Constant Space

### Sliding Window LC#3 

[reference](https://leetcode.com/problems/longest-substring-without-repeating-characters/discuss/2133524/JavaC%2B%2B-A-reall-Detailed-Explanation)

To find out a sliding window problem
> First thing is, we have given something like an "Array" | OR | "String"

> Second thing is, they are talking about either "subsequence" | OR | "substring"

> And third most thing is, either we have given a "window size i.e. k" | OR | we have to "manually find out window size" 



A template which you can use in any sliding window {Variable size} problem

```
while(j < size()){

    // Calculation's happen's here
-----------------------------------------------
    if(condition < k){
        j++;
    }
-----------------------------------------------

-----------------------------------------------
    else if(condition == k){
        // ans <-- calculation
        j++;
    }
----------------------------------------------

----------------------------------------------
    else if(condition > k){
        while(condition > k){
            // remove calculation for i
            i++;
        }
        j++;
    }
----------------------------------------------
}
return ans;

```


### Backtracking LC#131

[reference](https://leetcode.com/problems/palindrome-partitioning/solutions/182307/Java:-Backtracking-Template-General-Approach/?orderBy=most_votes)

- An algorithmic technique where the goal is to get all solutions to a problem using the brute force approach.

- All backtracking problems are composed by these three steps: choose, explore, unchoose.

    So for each problem, you need to know:

    > choose what?For this problem, we choose each substring.
    
    > how to explore? For this problem, we do the same thing to the remained string.
    
    > unchoose Do the opposite operation of choose.

- ```Define helper():``` Usually we need a helper funcition in backtracking problem, to accept more parameters.

    ```Parameters:``` Usually we need the following parameters
    
    - The object you are working on
        
    - A start index or an end index which indicate which part you are working on
    
    - A step result, to remember current choose and then do unchoose 
    
    - A final result, to remember the final result
    
    ```Base case: ```The base case defines when to add step into result, and when to return.
    
    ```Use for-loop: ```Usually we need a for loop to iterate though the input String s, so that we can choose all the options.
    
    ```Choose:``` In this problem, if the substring of s is palindrome, we add it into the step, which means we choose this substring.
    
    ```Explore:``` In this problem, we want to do the same thing to the remaining substring. So we recursively call our function.
    
    ```Un-Choose:``` We draw back, remove the chosen substring, in order to try other options.
    
    
### Data Structure
- A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.
    - An Array is a collection of items stored at contiguous memory locations. 
    
    - A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.
        - enqueue, dequeue, handle multiple data, access both ends
    - A Stack is a linear data structure that accompanies a principle known as Last In First Out(LIFO).
        - push, pop, peek
    - A Hash Table is a data structure that you can use to store data in key-value format with direct access to its items in constant time. 
        - put, remove, replace
    - A Linked List is a linear data structure, in which the elements are not stored at contiguous memory locations.
        - push, pop, peak, head, next
    - A Binary Tree is defined as a tree data structure where each node has at most 2 children. 
        - A Binary Search Tree is a node-based binary tree data structure which has the following properties
            - The left subtree of a node contains only nodes with keys lesser than the node’s key.
            - The right subtree of a node contains only nodes with keys greater than the node’s key.  -->(左小右大)
            - The left and right subtree each must also be a binary search tree.
        - A Heap is a special Tree-based data structure in which the tree is a complete binary tree.
            - max-heap(root of each binary tree is the maximum), min-heap(root of each binary tree is the minimum)
    - A Graph is a non-linear data structure consisting of vertices and edges. 
        - Composed of a set of vertices( V ) and a set of edges( E ), denoted by G(E, V).
        - BFS(Dijkstra's), DFS, minimum spanning tree, shortest path
        
### Two-Pointer Solution LC#19

[reference](https://leetcode.com/problems/remove-nth-node-from-end-of-list/solutions/1164542/js-python-java-c-easy-two-pointer-solution-w-explanation/)

- With a singly linked list, the only way to find the end of the list is to actually iterate all the way to the end. 

- In order to solve this problem in only one pass and O(1) extra space, however, we would need to find a way to both reach the end of the list with one pointer and also reach the n'th node from the end simultaneously with a second pointer.

- To do that, we can simply stagger our two pointers by n nodes by giving the first pointer (fast) a head start before starting the second pointer (slow). Doing this will cause slow to reach the n'th node from the end at the same time that fast reaches the end.

### Dynamic Programming
1. How to recognize a DP problem
   - DP is a method for solving problems by breaking them down into a collection of simpler subproblems, solving each of those subproblems just once, and storing their solutions.
2. Identify problem variables
3. Clearly express the recurrence relation
4. Identify the base cases
5. Decide if you want to implement it iteratively or recursively
6. Add memoization
7. Determine time complexity

### KMP LC#28
[reference](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)
- The Knuth-Morris-Pratt Algorithm
  
- A string-searching algorithm that searches for occurrences of a "word" W within a main "text string" S by employing the observation that when a mismatch occurs, the word itself embodies sufficient information to determine where the next match could begin, thus bypassing re-examination of previously matched characters.

- sample pseudocode
  
```
algorithm kmp_search:
    input:
        an array of characters, S (the text to be searched)
        an array of characters, W (the word sought)
    output:
        an array of integers, P (positions in S at which W is found)
        an integer, nP (number of positions)

    define variables:
        an integer, j ← 0 (the position of the current character in S)
        an integer, k ← 0 (the position of the current character in W)
        an array of integers, T (the table, computed elsewhere)

    let nP ← 0

    while j < length(S) do
        if W[k] = S[j] then
            let j ← j + 1
            let k ← k + 1
            if k = length(W) then
                (occurrence found, if only first occurrence is needed, m ← j - k  may be returned here)
                let P[nP] ← j - k, nP ← nP + 1
                let k ← T[k] (T[length(W)] can't be -1)
        else
            let k ← T[k]
            if k < 0 then
                let j ← j + 1
                let k ← k + 1

```
- "Partial match" table (also known as "failure function")
    - pseudocode for the table-building algorithm

    ```
    algorithm kmp_table:
        input:
            an array of characters, W (the word to be analyzed)
        output:
            an array of integers, T (the table to be filled)
    
        define variables:
            an integer, pos ← 1 (the current position we are computing in T)
            an integer, cnd ← 0 (the zero-based index in W of the next character of the current candidate substring)
    
        let T[0] ← -1
    
        while pos < length(W) do
            if W[pos] = W[cnd] then
                let T[pos] ← T[cnd]
            else
                let T[pos] ← cnd
                while cnd ≥ 0 and W[pos] ≠ W[cnd] do
                    let cnd ← T[cnd]
            let pos ← pos + 1, cnd ← cnd + 1
    
        let T[pos] ← cnd (only needed when all word occurrences are searched)
    ```
### Bit Manipulation LC#371 #29

- Using bitwise operations: AND, OR, XOR, NOT, and bit shifts 
    - & (and), | (or), ~ (not), ^ (exclusive-or, xor) and shift operators a << b and a >> b.
    - ```^ tricks```: Use ^ to remove even exactly same numbers and save the odd, or save the distinct bits and remove the same.
        - example: sum, missing number
    - ```| tricks```: Keep as many 1-bits as possible
        - example: reverse bits
    - ```& tricks```: Selecting certain bits
        - example: reverse bits
        - use ```int carry = (unsigned int)(a & b) << 1; ```

- XOR LC#268 #389

    - The XOR logical operation, exclusive or, takes two boolean operands and returns true if and only if the operands are different. 
    - That is, 1 xor 1 = 0, 0 xor 0 = 0, 1 xor 0 = 1, 0 xor 1 = 1
      - a xor a = 0
      - a xor b = b xor a
      - a xor b xor a = a xor a xor b = b
      - Example:
        ```
        (5 ^ 3)
            5 in binary = (101)
            3 in binary = (011)
            (101)^(011) = (110)
            (110) in decimal = 6
            Thus, 5^3 = 6.
        ```
    
      - Example for #389:
    
        s = abc
        
        t = cabx
        
        if we take XOR of every character. all the n character of s "abc" is similar to n character of t "cab". So, they will cancel each other. And we left with our answer.
        
        ```
        s =  abc
        t =  cbax
        ------------
        ans -> x
        -----------
        ```
        
### database sql
- LIKE '%xxx%'
- REGEXP
    - ```^``` to indicate beginning of a string ( '^xxx' = begin with xxx )
    - ```$``` to indicate end of a string ( 'xxx$' = end with xxx )
    - ```|```  logical or
    - ```[]``` e.g. [abc]d = [a-c]d = ad, bd, cd
- ORDER BY
    - field name DESC / ASC
    - 1 , 2
- LIMIT limit number of results
    - offset e.g. LIMIT 6, 3 = skip 6 and select 3
    - use limit and order by to find the nth highest/lowest
- JOIN ON
