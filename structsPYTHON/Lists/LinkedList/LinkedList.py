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
        if index == 0:
            self.prepend(value)
            return True
        if index == self.length - 1:
            self.append(value)
            return True

        prev_node = self.get_node(index - 1)
        if prev_node is not None:
            new_node = Node(value)
            new_node.next = prev_node.next
            prev_node.next = new_node
            self.length += 1
            return True

        return False

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

    def remove_node(self, index) -> bool: # deleteNode
        if index == 0:
            temp_node = self.pop_first()
            del temp_node
            return True
        if index == self.length - 1:
            temp_node = self.pop()
            del temp_node
            return True

        previous_node = self.get_node(index - 1)
        if previous_node is not None:
            temp_node = previous_node.next
            previous_node.next = temp_node.next
            temp_node.next = None
            del temp_node
            self.length -= 1
            return True

        return False

    def print(self) -> None:
        if self.length == 0:
            print("List is empty")
            return

        temp = self.head

        while temp:
            print(f"{temp.value}")
            temp = temp.next

    def set_value(self, index, value) -> bool:
        pre_updated_node = self.get_node(index)
        if pre_updated_node is not None:
            pre_updated_node.value = value
            return True
        return False

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


