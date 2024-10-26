class HashTable:

    def __init__(self, size: int = 7):
        self.data_map = [None] * size

    def __hash(self, key: str) -> int:
        my_hash: int = 0
        for letter in key:
            my_hash = (my_hash + ord(letter) * 23) % len(self.data_map)
        return my_hash

    def print_hash(self) -> None:
        for i, value in enumerate(self.data_map):
            print(f'{i}: {value}')

    def insert(self, key: str, value: int) -> None:
        index: int = self.__hash(key)

        if self.data_map[index] is None:
            self.data_map[index] = []

        self.data_map[index].append([key, value])
