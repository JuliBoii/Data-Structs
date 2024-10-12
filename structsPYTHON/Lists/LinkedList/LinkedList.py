from typing import Any


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

    def append(self, value) -> None:
        new_node = Node(value)

        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node

        self.length += 1

    def prepend(self, value) -> None:
        new_node = Node(value)

        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head = new_node

        self.length += 1

    def insert(self, index, value) -> bool:
        if index < 0 or index > self.length:
            return False
        if self.length == 0:
            self.prepend(value)
            return True
        if index == self.length - 1:
            self.append(value)
            return True

        new_node = Node(value)
        # temp =

    def pop_first(self) -> Node | None:
        if self.length == 0:
            return None

        temp_node = self.head
        if self.length == 1:
            self.head = None
            self.tail = None
        else:
            self.head = self.head.next
            temp_node.next = None

        self.length -= 1
        return temp_node

    def pop(self) -> Node | None:
        if self.length == 0:
            return None

        temp_node = self.head

        if self.length == 1:
            self.head = None
            self.tail = None
        else:
            while temp_node.next.next is not None:
                temp_node = temp_node.next

            self.tail = temp_node
            temp_node = temp_node.next
            self.tail.next = None

        self.length -= 1
        return temp_node

    def remove(self, index): # deleteNode
        pass

    def print(self) -> None | Any:
        if self.length == 0:
            print("List is empty")
            return

        temp = self.head

        while temp:
            print(f"{temp.value}")
            temp = temp.next

    def set_value(self, index, value) -> None:
        pass

    def get_node(self, index) -> Node | None:
        if self.length == 0:
            return None
        if index < 0 or index >= self.length:
            return None

        count = 0
        temp_node = self.head
        while count < index:
            temp_node = temp_node.next
            count += 1

        return temp_node

    def get_head(self) -> int:
        return self.head.value

    def get_tail(self) -> int:
        return self.tail.value

    def get_length(self) -> int:
        return self.length


