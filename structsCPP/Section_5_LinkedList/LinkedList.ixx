module;

#include <memory>
#include <print>
#include <utility>

export module LinkedList;

import Node;

export class LinkedList {
public:
    LinkedList() = default;

    explicit LinkedList(const int &value) {
        std::unique_ptr<Node> newNode = std::make_unique<Node>(value);
        head_ = std::move(newNode);
        tail_ = head_.get();
        length_++;
    };

    ~LinkedList() {
        if (!head_) {
            std::println("No Nodes to delete.");
        } else {
            while (head_) {
                std::println("Node Deleted");
                head_ = std::move(head_->next);
            }
            tail_ = nullptr;
        }
        std::println("Deleted LinkedList");
    }


    void prepend(const int &value) {
        std::unique_ptr<Node> newNode = std::make_unique<Node>(value);

        if (!head_) {
            tail_ = newNode.get();
            head_ = std::move(newNode);
        } else {
            newNode->next = std::move(head_);
            head_ = std::move(newNode);
        }
        length_++;
    }

    void append(const int &value) {
        std::unique_ptr<Node> newNode = std::make_unique<Node>(value);
        Node *rawNewNode = newNode.get();

        (length_ == 0 ? head_ : tail_->next) = std::move(newNode);

        tail_ = rawNewNode;
        length_++;
    }

    void removeHead() {
        if (length_ == 0) {
            std::println("Empty List");
            return;
        }

        if (length_ == 1) {
            tail_ = nullptr;
            head_.reset();
            head_ = nullptr;
        } else {
            head_ = std::move(head_->next);
        }
        length_--;
    }

    void removeTail() {
        if (length_ == 0) {
            std::println("Empty List");
            return;
        }

        if (length_ == 1) {
            tail_ = nullptr;
            head_.reset();
            head_ = nullptr;
        } else {
            Node *temp = head_.get();

            while (temp->next->next) {
                temp = temp->next.get();
            }

            tail_ = temp;
            temp->next.reset();
            tail_->next = nullptr;
        }

        length_--;
    }

    /*bool insert(const unsigned int &index, const int &value) {
        if (index < 0 || index > length_) {
            std::println("Index out of bounds");
            return false;
        }

        if (index == 0) {
            this->prepend(value);
            return true;
        }

        if (index == length_ - 1) {
            this->append(value);
            return true;
        }

        size_t count = 0;

        while (count < index) {
        }
    }*/

    void print() const { // NOLINT(*-convert-member-functions-to-static)
        std::println("Printing List:");
        Node *temp = head_.get();

        if (!temp) {
            std::println("Empty List\n");
            return;
        }

        while (temp) {
            std::println("{}", temp->value);
            temp = temp->next.get();
        }
        std::println("");
    }

    void printHead() const { // NOLINT(*-convert-member-functions-to-static)
        if (!head_) {
            std::println("Empty List");
            return;
        }
        std::println("Head: {}", head_->value);
    }

    void printTail() const { // NOLINT(*-convert-member-functions-to-static)
        if (!tail_) {
            std::println("Empty List");
            return;
        }
        std::println("Tail: {}", tail_->value);
    }

    void printLength() const { // NOLINT(*-convert-member-functions-to-static)
        std::println("Length: {}", length_);
    }

private:
    std::unique_ptr<Node> head_{};
    Node *tail_{};
    int length_{};
};
