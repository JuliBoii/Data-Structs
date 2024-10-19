from LinkedList.LinkedList import LinkedList

if __name__ == "__main__":
    linked_list = LinkedList(4)

    print("Printing List")
    linked_list.print()

    print("\nAppending a Node...")
    linked_list.append(-852)

    print("Prepending two Nodes...")
    linked_list.prepend(442)
    linked_list.prepend(40)

    print("Printing List")
    linked_list.print()

    print("\nPopping two Nodes...")
    print(f"Popped: {linked_list.pop().value}")
    print(f"Popped: {linked_list.pop().value}")

    print("Prepending two Nodes...")
    linked_list.prepend(25)
    linked_list.prepend(5)

    print("Printing List")
    linked_list.print()

    print("\nPopping three Nodes from beginning of List...")
    print(f"Popped: {linked_list.pop_first().value}")
    print(f"Popped: {linked_list.pop_first().value}")
    print(f"Popped: {linked_list.pop_first().value}")

    print("Updating a Node in the list...")
    print(f"Did Node, index 2, update: {linked_list.set_value(2, 42)}")
    print("Adding 4 more Nodes...")
    linked_list.append(5)
    linked_list.append(52)
    linked_list.append(92)
    linked_list.append(84)

    print("Printing List")
    linked_list.print()

    print("\nUpdating a Node in the list...")
    print(f"Did Node, index 2, update: {linked_list.set_value(2, -4)}")

    print("Printing List")
    linked_list.print()

    print("\nInserting a new Node at index 3, then index 9...")
    print(f"Was the new Node at index 3 inserted: {linked_list.insert(3, -9)}")

    print("Printing List after first insert...")
    linked_list.print()

    print(f"\nWas the new Node at index 9 inserted: {linked_list.insert(9, 12)}")

    print("\nRemoving node at index 4...")
    print(f"Was Node at index 4 removed: {linked_list.remove_node(4)}")
    print("Printing List after removing node at index 4...")
    linked_list.print()

    print("\nRemoving node at index 11...")
    print(f"Was Node at index 11 removed: {linked_list.remove_node(11)}")

    print(f"Printing Head before Reverse: {linked_list.get_head()}")
    print(f"Printing Tail before Reverse: {linked_list.get_tail()}")

    print("\nReversing List...")
    linked_list.reverse()
    print(f"Printing Head: {linked_list.get_head()}")
    print(f"Printing Tail: {linked_list.get_tail()}")
    print("Printing List after reversing List...")
    linked_list.print()