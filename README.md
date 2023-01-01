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
