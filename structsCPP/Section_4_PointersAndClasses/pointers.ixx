module;

#include <print>
#include <memory>

export module pointers;

namespace pointer_example
{
    export void old_pointer_ex()
    {
        int* num1{new int{11}};
        int* num2{num1};

        *num2 = 22;

        std::println("num1: {}", *num1);
        std::println("num2: {}", *num2);
        std::println("");

        delete num1;
        num1 = nullptr;
        num2 = nullptr;
    }

    export void new_pointer_ex()
    {
        std::shared_ptr<int> num1 = std::make_shared<int>(413);
        const std::shared_ptr num2{num1};

        *num2 = 242;

        std::println("num1: {}", *num1);
        std::println("num2: {}", *num2);
        std::println("");
    }
}
