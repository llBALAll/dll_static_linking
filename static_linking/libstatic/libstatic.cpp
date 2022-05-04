#include <iostream>


extern "C" void hello() {
	std::cout << "hello from lib!" << std::endl;
}
