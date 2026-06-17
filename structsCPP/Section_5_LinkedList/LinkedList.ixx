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

        if (length_ == 1) { // NOLINT(*-branch-clone)
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

        /*size_t count = 0;
        std::unique_ptr<Node> newNode = std::make_unique<Node>(value);
        Node *temp = head_.get();

        while (count < index - 1) {
            temp = temp->next.get();
            count++;
        }

        newNode->next = std::move(temp->next);
        temp->next = std::move(newNode);
        length_++;*/

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
