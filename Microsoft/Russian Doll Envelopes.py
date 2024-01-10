from bisect import bisect_left

class Solution(object):
    def maxEnvelopes(self, envelopes):
        if not envelopes:
            return 0
        envelopes.sort(key=lambda x: (x[0], -x[1]))
        max_idx = 0
        heights = [envelopes[0][1]] + [0] * (len(envelopes) - 1)
        for e in envelopes:
            idx = bisect_left(heights, e[1], hi=max_idx + 1)
            heights[idx] = e[1]
            max_idx = max(max_idx, idx)
        return max_idx + 1
