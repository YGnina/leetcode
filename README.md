# Notes

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



### XOR LC#268 #389

The XOR logical operation, exclusive or, takes two boolean operands and returns true if and only if the operands are different. 

That is, 1 xor 1 = 0, 0 xor 0 = 0, 1 xor 0 = 1, 0 xor 1 = 1

a xor a = 0

a xor b = b xor a

a xor b xor a = a xor a xor b = b


```
(5 ^ 3)

    5 in binary = (101)
    3 in binary = (011)
    (101)^(011) = (110)
    (110) in decimal = 6
    Thus, 5^3 = 6.

```

Example for #389:

s = abc

t = cabx

if we take XOR of every character. all the n character of s "abc" is similar to n character of t "cab". So, they will cancel each other. 

And we left with our answer.

```
s =  abc
t =  cbax
------------
ans -> x
-----------
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
    
    
### data structure
- A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.
    - An array is a collection of items stored at contiguous memory locations. 
    
    - A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.
        - enqueue, dequeue, handle multiple data, access both ends
    - A Stack is a linear data structure that accompanies a principle known as Last In First Out(LIFO).
        - push, pop, peek
    - A hash table is a data structure that you can use to store data in key-value format with direct access to its items in constant time. 
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


