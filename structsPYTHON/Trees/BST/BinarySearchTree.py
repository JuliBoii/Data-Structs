class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, value) -> bool:
        new_node = Node(value)

        if self.root is None:
            self.root = new_node
            return True

        temp = self.root
        while temp:
            if temp.value == new_node.value:
                return False
            if new_node.value < temp.value:
                if temp.left is None:
                    temp.left = new_node
                    return True
                temp = temp.left
            else:
                if temp.right is None:
                    temp.right = new_node
                    return True
                temp = temp.right

    # def remove(self, value) -> Node | None:
    #     if self.root is None:
    #         return None
    #
    #     node_exists = self.contains(value)
    #
    #     if node_exists:
    #         temp = self.root
    #         parent = temp
    #
    #         while temp:
    #             if temp.value == value:
    #                 print(f"Parent: {parent.value}")
    #                 print(f"child: {temp.value}")
    #             if value > temp.value:
    #                 parent = temp
    #                 temp = temp.right
    #             else:
    #                 parent = temp
    #                 temp = temp.left
    #
    #     return None

    def contains(self, value) -> bool:
        if self.root is None:
            return False

        temp = self.root
        while temp:
            if temp.value == value:
                return True
            elif value > temp.value:
                temp = temp.right
            else:
                temp = temp.left
        return False

    def print_tree(self, parent: Node) -> None:
        if self.root is None:
            return

        if parent is None:
            return
        print(parent.value)
        self.print_tree(parent.left)
        self.print_tree(parent.right)

    def get_root(self) -> Node | None:
        return self.root

