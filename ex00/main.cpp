#include "ScalarConverter.hpp"

int main(void)
{
    ScalarConverter::convert("42");
    std::cout << std::endl;
    ScalarConverter::convert("'c'");
    std::cout << std::endl;
    ScalarConverter::convert("4.2f");
    std::cout << std::endl;
	ScalarConverter::convert("nan");
    std::cout << std::endl;
	ScalarConverter::convert("bonjour");
    std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
	ScalarConverter::convert("inf");
    std::cout << std::endl;
    return (0);
}