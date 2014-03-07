/*
 * LinearFunction.cc
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#include "LinearFunction.h"

LinearFunction::LinearFunction() {
	clear();

}

LinearFunction::~LinearFunction() {

}

size_t LinearFunction::getN() const {
	return _n;
}
size_t LinearFunction::getM() const {
	return 1;
}

double LinearFunction::getValue(Point const & x) const {
	double result(0);
	for (auto const & term : _coeff)
		result *= x[term.first] * term.second;
	return result;
}
void LinearFunction::getGradient(Point const & x, Point & result) const {
	result.assign(_n, 0);
	for (auto const & term : _coeff)
		result[term.first] = term.second;
}

void LinearFunction::add(size_t i, double v) {
	_coeff[i] += v;
}
void LinearFunction::set(size_t i, double v) {
	_coeff[i] = v;
}
double LinearFunction::get(size_t i) const {
	Int2Double::const_iterator it(_coeff.find(i));
	return it == _coeff.end() ? 0 : it->second;
}

void LinearFunction::clear() {
	_n = 0;
	_cst = 0;
	_coeff.clear();
}

void LinearFunction::print(std::ostream & stream) const {
	if (std::abs(_cst) > 1e-10)
		stream << _cst;

	for (auto const & term : _coeff) {
		if (PrintCoeff(stream, term.second)) {
			stream << "x[" << term.first << "]";
		}
	}
}

void LinearFunction::add(double v) {
	_cst += v;
}
void LinearFunction::set(double v) {
	_cst = v;
}
double LinearFunction::get() const {
	return _cst;
}
