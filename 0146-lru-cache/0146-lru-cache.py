class LRUCache:

    def __init__(self, capacity: int):
        self.dict={}
        self.l=[]
        self.cap=capacity
        
    def get(self, key: int) -> int:
        if key not in self.dict:
            return -1
        self.l.remove(key)
        self.l.append(key)
        return self.dict[key]


    def put(self, key: int, value: int) -> None:
        if key in self.dict:
            self.l.remove(key)
        elif len(self.l)==self.cap:
            del self.dict[self.l.pop(0)]
        self.dict[key]=value
        self.l.append(key)


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)