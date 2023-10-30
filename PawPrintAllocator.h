#ifndef PAW_PRINT_ALLOCATOR_H
#define PAW_PRINT_ALLOCATOR_H

#include <cstddef>
#include <iostream>

template <typename T>
class PawPrintAllocator {
public:
    typedef T value_type;

    PawPrintAllocator() noexcept {}

    template <typename U>
    PawPrintAllocator(const PawPrintAllocator<U>&) noexcept {}

    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " paw prints..." << std::endl;
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating " << n << " paw prints..." << std::endl;
        ::operator delete(p);
    }
};

#endif // PAW_PRINT_ALLOCATOR_H
