#ifndef FELINE_EXCEPTION_H
#define FELINE_EXCEPTION_H

#include <exception>
#include <string>

class FelineException : public std::exception {
public:
    FelineException(const std::string& message) : msg(message) {}
    
    const char* what() const noexcept override {
        return msg.c_str();
    }

private:
    std::string msg;
};

#endif // FELINE_EXCEPTION_H
