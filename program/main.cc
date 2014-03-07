#include "LinearFunction.h"

int main(int argc, char** argv) {
	LinearFunction f;
	f.clear();
	f.add(1);
	f.add("x", -1);
	f.add("y", 3);
	std::cout << f << std::endl;
	return 0;
}
