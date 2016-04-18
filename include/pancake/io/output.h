#ifndef PANCAKE_IO_OUTPUT
#define PANCAKE_IO_OUTPUT

// standard
#include "string"

namespace Pancake
{
	namespace IO
	{
		enum class OutputType
		{
			DEBUG,
			INFO,
			ERROR,
			FAULT,
		};

		int output(std::string msg, OutputType type);
	}
}

#endif
