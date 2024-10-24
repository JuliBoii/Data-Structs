from Queue.QueueStack import Queue

if __name__ == "__main__":
    myQ = Queue(5)

    print("Adding 2 nodes to the Queue...")
    myQ.enqueue(8)
    myQ.enqueue(24)

    print(f"First: {myQ.get_first()}")
    print(f"Last: {myQ.get_last()}")
    print(f"Length: {myQ.get_length()}")
    print("Printing Queue...")
    myQ.print()

    print("\nDequeuing a node...")
    print(f"Dequeued: {myQ.dequeue().value}")

    print(f"\nFirst: {myQ.get_first()}")
    print(f"Last: {myQ.get_last()}")
    print(f"Length: {myQ.get_length()}")
    print("Printing Queue...")
    myQ.print()

    print("\nDequeuing a node...")
    print(f"Dequeued: {myQ.dequeue().value}")

    print("\nDequeuing a node...")
    print(f"Dequeued: {myQ.dequeue().value}")

    print("\nDequeuing a node...")
    print(f"Dequeued: {myQ.dequeue()}")