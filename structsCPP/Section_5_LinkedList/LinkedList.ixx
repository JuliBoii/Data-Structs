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
                head_ = std::exchange(head_->next, nullptr);
            }
            tail_ = nullptr;
        }
        std::println("~LinkedList()");
    }

    void prepend(const int &value) {
        auto newNode = std::make_unique<Node>(value);
        Node *rawNewNode = newNode.get();

        // Sets next to current head_
        // if length == 0, next will still be nullptr
        newNode->next = std::move(head_);

        // Set head_ to the new Node
        head_ = std::move(newNode);

        // If length == 0 (empty list), set tail_ to new Node
        // else tail_ remains unchanged
        tail_ = (length_ == 0 ? rawNewNode : tail_);

        length_++;
    }

    void append(const int &value) {
        auto newNode = std::make_unique<Node>(value);
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

        // Handles length_ == 1 & length_ > 1
        head_ = std::move(head_->next);

        if (!head_) {
            tail_ = nullptr;
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

            std::unique_ptr<Node> tailToRemove = std::move(temp->next);
            tail_ = temp;
            tail_->next = nullptr;
        }

        length_--;
    }

    bool insert(const size_t &index, const int &value) {
        if (index == 0) {
            this->prepend(value);
            return true;
        }

        if (index == length_) {
            this->append(value);
            return true;
        }


        if (Node *beforeIndexNode = this->getNode(index - 1)) {
            std::unique_ptr<Node> newNode = std::make_unique<Node>(value);
            newNode->next = std::move(beforeIndexNode->next);
            beforeIndexNode->next = std::move(newNode);
            length_++;
            return true;
        }

        return false;
    }

    bool setNode(const size_t &index, const int &value) const { // NOLINT(*-convert-member-functions-to-static, *-use-nodiscard)
        if (Node *tempNode = this->getNode(index)) {
            tempNode->value = value;
            return true;
        }

        return false;
    }

    void removeNode(const size_t &index) { // NOLINT(*-convert-member-functions-to-static)
        if (index == 0) {
            return this->removeHead();
        }

        if (index == length_ - 1) {
            return this->removeTail();
        }

        if (Node *beforeIndexNode = getNode(index - 1)) {
            std::unique_ptr<Node> nodeToDelete = std::move(beforeIndexNode->next);
            beforeIndexNode->next = std::move(nodeToDelete->next);
            length_--;
            return;
        }

        std::println("Empty List or Invalid Index");
    }

    void print() const { // NOLINT(*-convert-member-functions-to-static)
        std::println("Printing List:");
        Node *temp = head_.get();

        if (!temp) {
            std::println("Empty List\n");
            return;
        }

        while (temp) {
            std::print("{} -> ", temp->value);
            temp = temp->next.get();
        }
        std::println("nullptr\n");
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

    size_t getLength() const // NOLINT(*-use-nodiscard)
    {
        return length_;
    }

    // Challenge Methods

    void reverse() { // NOLINT(*-convert-member-functions-to-static)
        std::unique_ptr<Node> reversed_head = nullptr;
        tail_ = head_.get();

        while (head_) {
            std::unique_ptr<Node> currentNode = std::exchange(head_, std::move(head_->next));
            currentNode->next = std::move(reversed_head);
            reversed_head = std::move(currentNode);
        }

        head_ = std::move(reversed_head);
    }

private:
    std::unique_ptr<Node> head_{};
    Node *tail_{};
    size_t length_{};

    Node *getNode(const size_t &index) const { // NOLINT(*-use-nodiscard)
        if (index < 0 || index >= length_) {
            return nullptr;
        }

        if (length_ == 0) {
            return nullptr;
        }

        size_t count{0};
        Node *temp = head_.get();

        while (count < index) {
            temp = temp->next.get();
            count++;
        }
        return temp;
    }
};
