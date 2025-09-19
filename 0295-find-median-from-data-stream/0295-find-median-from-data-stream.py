from sortedcontainers import SortedList

class MedianFinder:

    def __init__(self):
        self.arr = SortedList()

    def addNum(self, num: int) -> None:
        self.arr.add(num)

    def findMedian(self) -> float:
        n = len(self.arr)
        mid = n // 2
        if n % 2 == 0:
            return (self.arr[mid - 1] + self.arr[mid]) / 2
        else:
            return self.arr[mid]

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()