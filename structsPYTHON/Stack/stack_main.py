from Stack.Stack import Stack

if __name__ == "__main__":
    myStack = Stack(4)

    print(f"Current Height: {myStack.get_height()}")
    print(f"Top Value: {myStack.get_top()}")
    print("Printing Stack...")
    myStack.print()

    print("\nRemoving a node...")
    print(f"Removed: {myStack.pop().value}")
    print("Printing Stack...")
    myStack.print()

    print("\nAdding 4 nodes to the stack...")
    myStack.push(8)
    myStack.push(14)
    myStack.push(-6)
    myStack.push(84)

    print(f"Current Height: {myStack.get_height()}")
    print(f"Top Value: {myStack.get_top()}")
    print("Printing Stack...")
    myStack.print()