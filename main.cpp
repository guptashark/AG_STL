#include <iostream> 
#include <cassert>

#include "ag_array.h"

void ag_array_tests(void) {

	ag_std::array<int, 0> ag_std_no_num;
	assert(ag_std_no_num.empty());
}


int main(int argc, char *argv[]) {
	
	(void)argc;
	(void)argv;

	ag_array_tests();

	std::cout << "Udemy Data Structures and Algorithms" << std::endl;
	return 0;
}
