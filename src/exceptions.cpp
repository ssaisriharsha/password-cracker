#include "exceptions.hpp"

const char *InvalidBase::what() const noexcept
{
    return "Invalid base given.";
}

const char *InvalidHashException::what() const noexcept
{
    return "Given hash is not a valid hash.";
}

const char *InvalidActionException::what() const noexcept
{
    return "The selected action is not valid.";
}
