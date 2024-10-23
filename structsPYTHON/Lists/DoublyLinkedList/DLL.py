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

        if index < int(self.length / 2):
            temp_node = self.head
            count = 0
            while count < index:
                temp_node = temp_node.next
                count += 1
            return temp_node
        else:
            temp_node = self.tail
            count = self.length - 1
            while count > index:
                temp_node = temp_node.previous
                count -= 1
            return temp_node


    def insert(self, index, value) -> bool:
        if index == 0:
            self.prepend(value)
            return True
        if index == self.length:
            self.append(value)
            return True

        before_node = self.get_node(index - 1)

        if before_node:
            new_node = Node(value)
            after_node = before_node.next
            new_node.next = after_node
            new_node.previous = before_node
            before_node.next = new_node
            after_node.previous = new_node
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
            before_node = removed_node.previous
            after_node = removed_node.next
            removed_node.next = None
            removed_node.previous = None
            before_node.next = after_node
            after_node.previous = before_node
            self.length -= 1
            return removed_node

        return None

    def print_list(self):
        if self.is_empty():
            return

        count = 0
        temp = self.head
        while count < self.length:
            print(temp.value)
            temp = temp.next
            count += 1

    def get_head(self) -> int:
        return self.head.value

    def get_tail(self) -> int:
        return self.tail.value

    def set_value(self, index, value) -> bool:
        if self.is_empty() is not True:
            temp_node = self.get_node(index)
            if temp_node:
                temp_node.value = value
                return True
            return False

        return False

    # def reverse(self):
    #     if self.length < 2:
    #         return
    #
    #     count = 0
    #     while count < self.length:
    #
    #         count += 1