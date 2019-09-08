#include <iostream> 
#include <cassert>

#include "ag_array.h"

void ag_array_tests(void) {
	{
		ag_std::array<int, 5> a;
		a.at(3) = 3;
		a.at(4) = 4;
		
		assert(3 == a.at(3));
		assert(4 == a.at(4));
		
		try {
			int b = a.at(5);
			(void)b;
		} catch (const std::out_of_range& e) {
			(void)e;
			// TODO: How do we know we got here!?
		}
		
	}

	// operator[] test... need more tests... 
	{
		ag_std::array<int, 5> a;
		a[3] = 3;
		a[4] = 4;
		
		assert(3 == a[3]);
		assert(4 == a[4]);
			
	}

	// front test
	{
		ag_std::array<int, 1> a;
		a[0] = 4;
		assert(4 == a.front());

		ag_std::array<int, 10> b;
		b[0] = 5;
		assert(5 == b.front());
	}

	// back test
	{
		ag_std::array<int, 1> a;
		a[0] = 4;
		assert(4 == a.back());

		ag_std::array<int, 30> b;
		b[29] = 29;
		assert(29 == b.back());
	}
	// data test

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

	// at test
}

	

int main(int argc, char *argv[]) {
	
	(void)argc;
	(void)argv;

	ag_array_tests();

	std::cout << "Udemy Data Structures and Algorithms" << std::endl;
	return 0;
}
