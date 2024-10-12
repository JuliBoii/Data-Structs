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
    linked_list.pop()
    linked_list.pop()

    print("Prepending two Nodes...")
    linked_list.prepend(25)
    linked_list.prepend(5)

    print("Printing List")
    linked_list.print()

    print("\nPopping three Nodes from beginning of List...")
    print(linked_list.pop_first())
    print(linked_list.pop_first())
    print(linked_list.pop_first())

    print("\nPrinting List")
    linked_list.print()
