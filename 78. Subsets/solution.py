class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        ans = [[]]

        for n in nums:
            ans += [a + [n] for a in ans]
            
        return ans
