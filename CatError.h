#ifndef CAT_ERROR_H
#define CAT_ERROR_H

#include <exception>
#include <string>

class CatError : public std::exception {
public:
    CatError(const std::string& message) : msg(message) {}
    
    const char* what() const noexcept override {
        return msg.c_str();
    }

private:
    std::string msg;
};

#endif // CAT_ERROR_H
