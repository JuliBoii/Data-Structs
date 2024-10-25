from BST.BinarySearchTree import BinarySearchTree


if __name__ == "__main__":
    myBST = BinarySearchTree()

    print("Inserting Nodes...")
    myBST.insert(47)
    myBST.insert(21)
    myBST.insert(76)
    myBST.insert(18)
    myBST.insert(27)
    myBST.insert(52)
    myBST.insert(82)
    print("Printing Tree...")
    myBST.print_tree(myBST.get_root())

    print(f"\nDoes tree contain \'27\': {myBST.contains(27)}")
    print(f"Does tree contain \'17\': {myBST.contains(17)}")

    # myBST.remove(52)
