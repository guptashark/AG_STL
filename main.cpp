#include <iostream> 
#include <cassert>

#include "ag_array.h"

void ag_array_tests(void) {

	// emtpy checking. 
	{
		ag_std::array<int, 0> a;
		assert(a.empty());
		ag_std::array<int, 1> b;
		assert( ! b.empty());
		ag_std::array<int, 100> c;
		assert( ! c.empty());

	}

	// size and max_sizes check. 
	{
		ag_std::array<int, 0> a;
		assert(0 == a.size());
		assert(0 == a.max_size());

		ag_std::array<int, 4> b;
		assert(4 == b.size());
		assert(4 == b.max_size());
	}
}

	

int main(int argc, char *argv[]) {
	
	(void)argc;
	(void)argv;

	ag_array_tests();

	std::cout << "Udemy Data Structures and Algorithms" << std::endl;
	return 0;
}
