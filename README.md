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
