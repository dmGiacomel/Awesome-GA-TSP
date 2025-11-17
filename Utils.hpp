#ifndef UTILS_HPP
#define UTILS_HPP 
#include <cstddef>

namespace Utils{
    inline size_t flattenedMatrixCoordinates(size_t row, size_t column, size_t row_size){
        return row * row_size + column;
    }
} 

#endif