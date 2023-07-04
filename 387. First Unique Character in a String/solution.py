class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq = Counter(s)

        for c in s:
            if freq[c] == 1:
                return s.index(c)

        return -1
