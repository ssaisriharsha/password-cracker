#ifndef _EXCEPTIONS_HPP_
#define _EXCEPTIONS_HPP_
#include <exception>

class InvalidBase: std::exception
{
    public:
    virtual const char *what() const noexcept override;
};

class InvalidHashException: std::exception
{
    public:
    virtual const char *what() const noexcept override;
};

#endif