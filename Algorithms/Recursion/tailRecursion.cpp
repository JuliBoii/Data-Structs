#include <iostream>

void countDown(const int& n) {
    if (n > 0) {
        std::cout << n << ' ';
        countDown(n - 1);
    }
}

int main() {
    countDown(5);
    return 0;
}