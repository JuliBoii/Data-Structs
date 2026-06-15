module;

#include <print>
#include <string>
#include <string_view>

export module classes;

export class Cookie
{
    private:
        std::string color{};
    public:
        Cookie(std::string_view color)
        {
            this->color = color;
        }

        std::string_view getColor() const
        {
            return this->color;
        }

        void setColor(const std::string_view& color)
        {
            this->color = color;
        }
};