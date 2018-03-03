#pragma once
#include <cstddef>
#include <cstdint>

namespace brcpp
{
    class file_reader
    {
    public:
        virtual size_t read(uint8_t* dest, uint64_t position, size_t bytes) = 0;
        virtual uint64_t size() = 0;
        virtual bool depleted() = 0;
        virtual ~file_reader() = default;
    };
}
