#ifndef PURRSISTENT_VECTOR_H
#define PURRSISTENT_VECTOR_H

#include <vector>
#include <iostream>

template <typename T>
class PurrsistentVector {
public:
    PurrsistentVector() {}

    void append(const T& value) {
        std::vector<T> new_data = data;
        new_data.push_back(value);
        data = new_data;
        std::cout << "Value " << value << " purred into the vector." << std::endl;
    }

    T at(size_t index) const {
        return data.at(index);
    }

    size_t size() const {
        return data.size();
    }

private:
    std::vector<T> data;
};

#endif // PURRSISTENT_VECTOR_H
