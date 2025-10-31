class Trie:
    def __init__(self):
        self.l=[]
        pass

    def insert(self, word: str) -> None:
        self.l.append(word)

    def search(self, word: str) -> bool:
        return word in self.l

    def startsWith(self, prefix: str) -> bool:
        for i in self.l:
            if i.startswith(prefix):
                return True
        return False    


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)