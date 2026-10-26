#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{	
}
ScalarConverter::~ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const & rhs)
{
    (void)rhs;
    return (*this);
}

static void display(double value)
{
	std::cout << std::fixed << std::setprecision(1);

	if (value != value || value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<int>(value)))
    	std::cout << "char: Non displayable" << std::endl;
	else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	if (value != value || value < INT_MIN || value > INT_MAX)
    	std::cout << "int: impossible" << std::endl;
	else
    	std::cout << "int: " << static_cast<int>(value) << std::endl;
		
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}
void	ScalarConverter::convert(std::string const &str)
{
	double	value;

	if(str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		value = str[1];
	else if (str == "nan" || str == "+inf" || str == "-inf"
    	|| str == "nanf" || str == "+inff" || str == "-inff")
	{
		if (str == "nan" || str == "nanf")
    		value = -(0.0 / 0.0);
		else if (str == "+inf" || str == "+inff")
    		value = 1.0 / 0.0;
		else if (str == "-inf" || str == "-inff")
		    value = -1.0 / 0.0;
	}
	else
	{
		char	*end;
		const char	*start = str.c_str();
        
		value = strtod(str.c_str(), &end);
		if(end == start)
		{
            std::cout << "Invalid literal" << std::endl;
            return ;
        }
	}
	display(value);
}
