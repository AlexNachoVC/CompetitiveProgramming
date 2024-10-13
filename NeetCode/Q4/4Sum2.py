import collections

class Solution:
    def fourSumcount(self, nums1, nums2, nums3, nums4):
        lookup = collections.Counter()

        for x in nums1: # store all possible combinations of sum of the first two arrays.
            for y in nums2:
                lookup[x + y] += 1
        
        total = 0
        for x in nums3: # iterate through the left two array, and search for the negation of the sum. if that exists, that means we can form a 4sum == 0, 
            for y in nums4: 
                total += lookup[-(x + y)] # this returns the amount of ocurrences of that particular sum, which represent how many valid combinations we can do. that gets added to total
        return total