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
