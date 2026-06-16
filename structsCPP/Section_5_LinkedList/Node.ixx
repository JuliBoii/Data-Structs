module;

#include <memory>

export module Node;

export class Node {
public:
    int value{};
    std::unique_ptr<Node> next;

    explicit Node(const int &value) : value(value), next(nullptr) {
    }
};
