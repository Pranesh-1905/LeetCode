class MinStack:

    def __init__(self):
        self.a=[]
        
    def push(self, val: int) -> None:
        self.a.append(val)
    def pop(self) -> None:
        self.a.pop()
    def top(self) -> int:
        if self.a:
            return self.a[-1]
        return None

    def getMin(self) -> int:
        if self.a:
            return min(self.a)
        return None
            


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()