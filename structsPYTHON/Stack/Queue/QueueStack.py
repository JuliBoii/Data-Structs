class Node:

    def __init__(self, value):
        self.value = value
        self.next = None


class Queue:

    def __init__(self, value):
        new_node = Node(value)
        self.first = new_node
        self.last = new_node
        self.length = 1

    def print(self) -> None:
        if self.is_empty():
            print("Queue is empty!")
            return

        temp = self.first
        while temp:
            print(temp.value)
            temp = temp.next

    def is_empty(self) -> bool:
        if self.length == 0:
            return True
        return False

    def enqueue(self, value) -> None:
        new_node = Node(value)

        if self.is_empty():
            self.first = new_node
            self.last = new_node
        else:
            self.last.next = new_node
            self.last = new_node

        self.length += 1

    def dequeue(self) -> Node | None:
        if self.is_empty():
            return None

        temp = self.first
        if self.length == 1:
            self.first = None
            self.last = None
        else:
            self.first = temp.next
            temp.next = None

        self.length -= 1
        return temp

    def get_first(self) -> int:
        return self.first.value

    def get_last(self) -> int:
        return self.last.value

    def get_length(self) -> int:
        return self.length