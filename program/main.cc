#include "LinearFunction.h"

int main(int argc, char** argv) {
	LinearFunction f;
	f.add(1);
	f.add(2, -1);
	f.add(10, 3);
	std::cout << f << std::endl;
	return 0;
}
