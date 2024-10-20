import collections

class Solution(object):
    def canReorderDoubled(self, arr):
        c = collections.Counter(arr)
        for x in sorted(c, key=abs):
            if c[x] > c[2 * x]:
                return False
            c[2 * x] -= c[x]
        return True