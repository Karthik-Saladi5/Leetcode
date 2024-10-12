class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[0])
        pq = []
        for interval in intervals:
            start = interval[0]
            end = interval[1]
            if pq and pq[0] < start:
                heapq.heappop(pq)
            heapq.heappush(pq, end)
        return len(pq)