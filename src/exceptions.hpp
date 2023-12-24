#ifndef _EXCEPTIONS_HPP_
#define _EXCEPTIONS_HPP_
#include <exception>

class InvalidBase: std::exception
{
    virtual const char *what() const noexcept override;
};

#endif