#include <iostream>
#include <ctime>

void count(const int& n) {
    if (n > 0) {
        count(n - 1);
        std::cout << n << ' ';
    }
}

int main() {
    count(5);
    return 0;
}