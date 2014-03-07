/*
 * QuadraticFunction.cc
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#include "QuadraticFunction.h"

QuadraticFunction::QuadraticFunction() {
	// TODO Auto-generated constructor stub

}

QuadraticFunction::~QuadraticFunction() {
	// TODO Auto-generated destructor stub
}

void QuadraticFunction::clear() {
}
void QuadraticFunction::add(double v) {
}
void QuadraticFunction::set(double v) {
}
double QuadraticFunction::get() const {
	return 0;
}

void QuadraticFunction::add(std::string i, double v) {
}
void QuadraticFunction::set(std::string i, double v) {
}
double QuadraticFunction::get(std::string i) const {
	return 0;
}

void QuadraticFunction::add(std::string i, std::string j, double v) {
}
void QuadraticFunction::set(std::string i, std::string j, double v) {
}
double QuadraticFunction::get(std::string i, std::string j) const {
	return 0;
}

void QuadraticFunction::print(std::ostream & = std::cout) const {

}

IntMat2Double const & QuadraticFunction::getBilTerms() const {
	return _bilinearTerms;
}
