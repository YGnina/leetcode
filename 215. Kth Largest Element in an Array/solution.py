class Solution(object):
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        
        min_heap = []

        for n in nums:
            heapq.heappush(min_heap, n)
            if len(min_heap) > k:
                heapq.heappop(min_heap)

        return min_heap[0]
