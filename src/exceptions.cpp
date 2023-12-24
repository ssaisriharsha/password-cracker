#include "exceptions.hpp"

const char *InvalidBase::what() const noexcept
{
    return "Invalid base given.";
}