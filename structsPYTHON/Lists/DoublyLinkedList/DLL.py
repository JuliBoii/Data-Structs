class Node:
    def __init__(self, value):
        self.value = value
        self.next = None
        self.previous = None

# Doubly Linked List
class DoublyLinkedList:
    def __init__(self, value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1

    def is_empty(self) -> bool:
        if self.length == 0:
            return True
        return False


    def prepend(self, value) -> None:
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node

        else:
            self.head.previous = new_node
            new_node.next = self.head
            self.head = new_node

        self.length += 1

    def append(self, value) -> None:
        new_node = Node(value)

        if self.length == 0:
            self.head = new_node
            self.tail = new_node

        else:
            new_node.previous = self.tail
            self.tail.next = new_node
            self.tail = new_node

        self.length += 1

    def pop(self) -> Node | None:
        if self.is_empty():
            return None

        temp = self.tail
        if self.length == 1:
            self.head = None
            self.tail = None
        else:
            self.tail = temp.previous
            self.tail.next = None
            temp.previous = None

        self.length -= 1
        return temp

    def pop_first(self) -> Node | None:
        if self.is_empty():
            return None

        temp = self.head
        if self.length == 1:
            self.head = None
            self.tail = None
        else:
            self.head = temp.next
            self.head.previous = None
            temp.next = None

        self.length -= 1
        return temp

    def get_node(self, index) -> Node | None:
        if index < 0 or index >= self.length:
            return None

        if self.is_empty():
            return None

        count = 0
        temp = self.head
        while count < index:
            temp = temp.next
            count += 1

        return temp

    def insert(self, index, value) -> bool:
        if index == 0:
            self.prepend(value)
            return True
        if index == self.length - 1:
            self.append(value)
            return True

        prev_node = self.get_node(index - 1)
        if prev_node:
            new_node = Node(value)
            temp = prev_node.next
            new_node.next = temp
            new_node.previous = prev_node
            prev_node.next = new_node
            temp.previous = new_node
            self.length += 1
            return True

        return False

    def remove(self, index) -> Node | None:
        if index == 0:
            return self.pop_first()

        if index == self.length - 1:
            return self.pop()

        removed_node = self.get_node(index - 1)
        if removed_node:
            removed_node.next.previous = removed_node.previous
            removed_node.previous.next = removed_node.next
            removed_node.next = None
            removed_node.previous = None
            self.length -= 1
            return removed_node

        return removed_node

    def print_list(self):
        if self.is_empty():
            return

        count = 0
        temp = self.head
        while count < self.length:
            print(temp)
            temp = temp.next
            count += 1
