#include <iostream>

void treeCount(const int& n) {
    if (n > 0) {
        std::cout << n << '\n';
        treeCount(n - 1);
        treeCount(n - 1);
    }
}

int main() {
    treeCount(4);
    return 0;
}