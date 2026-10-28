#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>


struct Data
{
    Data(void);
    Data(Data const &src);
    ~Data();
    Data & operator=(Data const &rhs);

    std::string name;
    int         value;
};

#endif