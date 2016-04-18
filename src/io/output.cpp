// local
#include "pancake/io/output.h"

// standard
#include "iostream"

namespace Pancake
{
	namespace IO
	{
		int output(std::string msg, OutputType type)
		{
			switch(type)
			{
			case OutputType::DEBUG:
				std::cout << "[ DEBUG ] ";
			case OutputType::INFO:
				std::cout << "[ INFO  ] ";
			case OutputType::ERROR:
				std::cout << "[ ERROR ] ";
			case OutputType::FAULT:
				std::cout << "[ FAULT ] ";
			default:
				std::cout << "[ NONE  ] ";
				break;
			}

			std::cout << msg << std::endl;
		}
	}
}
