#include "QuadraticFunction.h"
#include "TP1.h"
int main(int argc, char** argv) {
	QuadraticFunction f;
	std::set<double> eigens;
	TP1::GetExample1(f);
	std::cout << f << std::endl;
	f.eigenValue(eigens);
	TP1::GetExample2(f);
	std::cout << f << std::endl;
	f.eigenValue(eigens);
	TP1::GetExample3(f);
	std::cout << f << std::endl;
	f.eigenValue(eigens);
	return 0;
}
