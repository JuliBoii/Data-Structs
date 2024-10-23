class Node:

    def __init__(self, value):
        self.value = value
        self.next = None


class Stack:

    def __init__(self, value):
        new_node = Node(value)
        self.top = new_node
        self.height = 1

    def push(self, value) -> None:
        pass

    def pop(self) -> Node | None:
        pass

    def is_empty(self) -> bool:
        if self.height == 0:
            return True
        return False

    def print(self) -> None:
        if self.is_empty():
            return

        temp = self.top
        while temp:
            print(temp.value)
            temp = temp.next

    def get_top(self) -> int:
        pass

    def get_height(self) -> int:
        pass
