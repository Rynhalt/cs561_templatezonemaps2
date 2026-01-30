#include "zonemaps.h"
#include <stdexcept>

template<typename T>
zonemap<T>::zonemap(std::vector<T> _elements, uint _num_elements_per_zone)
{
    // constructor 

    // Your code starts here ...

    // storing inputs
    elements = std::move(_elements);
    // Instead of copying elements, transferring _elements to an xvalue to reuse resources!
    
    assert(_num_elements_per_zone > 0);
    // the number of elements per zone must be greater thant 1

    num_elements_per_zone = _num_elements_per_zone;
    // move() does not provide benefit for a uint

}

template<typename T>
size_t zonemap<T>::query(T key)
{
    // Your code starts here ...
    return 0;
}

