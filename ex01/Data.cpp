#include "Data.hpp"

Data::Data(void) : name(""), value(0)
{
}

Data::Data(Data const & src) : name(src.name), value(src.value)
{
}

Data::~Data()
{
}

Data & Data::operator=(Data const & rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        value = rhs.value;
    }
    return (*this);
}