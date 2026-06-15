#include <memory>
#include <print>

import pointers;
import classes;

int main()
{
    std::println("Working with Pointers:");
    pointer_example::old_pointer_ex();
    pointer_example::new_pointer_ex();

    std::println("Working with Classes (updated example with smart pointers):");
    // Cookie cookie("Blue");
    std::unique_ptr<Cookie> cookie1 = std::make_unique<Cookie>("green");
    std::unique_ptr<Cookie> cookie2 = std::make_unique<Cookie>("blue");

    cookie2->setColor("yellow");

    std::println("The cookie is {}", cookie1->getColor());
    std::println("The cookie is {}", cookie2->getColor());

    return 0;
}