class MyCalendarTwo:
    def __init__(self):
        self.mp = defaultdict(int)

    def book(self, start: int, end: int) -> bool:
        self.mp[start] += 1
        self.mp[end] -= 1
        curr = 0
        for time in sorted(self.mp.keys()):
            curr += self.mp[time]
            if curr >= 3:
                self.mp[start] -= 1
                self.mp[end] += 1
                return False
        return True



# Your MyCalendarTwo object will be instantiated and called as such:
# obj = MyCalendarTwo()
# param_1 = obj.book(start,end)