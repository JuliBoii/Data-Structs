class Node:
    def __init__(self, value):
        self.value = value
        self.next = None


class LinkedList:
    def __init__(self, value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def append(self, value):
        pass

    def prepend(self, value):
        pass

    def insert(self, index, value):
        pass

    def pop(self):
        pass

    def remove(self, index):
        pass
