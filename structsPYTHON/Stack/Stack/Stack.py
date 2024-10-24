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
        new_node = Node(value)
        if self.is_empty() is not True:
            new_node.next = self.top

        self.top = new_node
        self.height += 1


    def pop(self) -> Node | None:
        if self.is_empty():
            return None

        removed_node = self.top
        if self.height == 1:
            self.top = None
        else:
            self.top = removed_node.next

        self.height -= 1
        return removed_node

    def is_empty(self) -> bool:
        if self.height == 0:
            return True
        return False

    def print(self) -> None:
        if self.is_empty():
            print("Stack is empty!")
            return

        temp = self.top
        while temp:
            print(temp.value)
            temp = temp.next

    def get_top(self) -> int:
        return self.top.value

    def get_height(self) -> int:
        return self.height
