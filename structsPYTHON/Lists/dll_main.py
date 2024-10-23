from DoublyLinkedList.DLL import DoublyLinkedList


if __name__ == "__main__":
    myDLL = DoublyLinkedList(5)

    print("Printing List")
    myDLL.print_list()

    print("\nAppending a Node...")
    myDLL.append(-82)

    print("Prepending two Nodes...")
    myDLL.prepend(42)
    myDLL.prepend(4)

    print("Printing List")
    myDLL.print_list()

    print("\nPopping a Node from list...")
    print(f"Popped: {myDLL.pop().value}")

    print("Prepending two Nodes...")
    myDLL.prepend(25)
    myDLL.prepend(5)

    print("Printing List")
    myDLL.print_list()

    print("\nPopping three Nodes from beginning of List...")
    print(f"Popped: {myDLL.pop_first().value}")
    print(f"Popped: {myDLL.pop_first().value}")
    print(f"Popped: {myDLL.pop_first().value}")

    print("Updating a Node in the list...")
    print(f"Did Node, index 4, update: {myDLL.set_value(4, 42)}")
    print("Adding 4 more Nodes...")
    myDLL.append(95)
    myDLL.append(55)
    myDLL.append(-45)
    myDLL.append(91)

    print("Printing List...")
    myDLL.print_list()

    print("\nUpdating a Node in the list...")
    print(f"Did Node, index 2, update: {myDLL.set_value(2, -4)}")

    print("Printing List")
    myDLL.print_list()

    print("\nInserting a new Node at index 3, then index 9...")
    print(f"Was the new Node at index 3 inserted: {myDLL.insert(3, -9)}")

    print("Printing List after first insert...")
    myDLL.print_list()

    print(f"\nWas the new Node at index 9 inserted: {myDLL.insert(9, 12)}")

    print("\nRemoving node at index 4...")
    print(f"Was Node at index 4 removed: {myDLL.remove(4)}")
    print("Printing List after removing node at index 4...")
    myDLL.print_list()

    print("\nRemoving node at index 11...")
    print(f"Was Node at index 11 removed: {myDLL.remove(11)}")

    print(f"Printing Head before Reverse: {myDLL.get_head()}")
    print(f"Printing Tail before Reverse: {myDLL.get_tail()}")

    print("\nReversing List...")
    # myDLL.reverse()
    print(f"Printing Head: {myDLL.get_head()}")
    print(f"Printing Tail: {myDLL.get_tail()}")
    print("Printing List after reversing List...")
    myDLL.print_list()