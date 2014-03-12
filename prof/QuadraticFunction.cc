/*
 * QuadraticFunction.cc
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#include "QuadraticFunction.h"

QuadraticFunction::QuadraticFunction() :
		_cst(0) {

}

QuadraticFunction::~QuadraticFunction() {

}

void QuadraticFunction::clear() {
	_cst = 0;
	_linearTerms.clear();
	_bilinearTerms.clear();
}
void QuadraticFunction::add(double v) {
	_cst += v;
}
void QuadraticFunction::set(double v) {
	_cst = v;
}
double QuadraticFunction::get() const {
	return _cst;
}

void QuadraticFunction::add(std::string i, double v) {
	_linearTerms.add(getId(i), v);
}
void QuadraticFunction::set(std::string i, double v) {
	_linearTerms.set(getId(i), v);
}
double QuadraticFunction::get(std::string i) const {
	return _linearTerms.get(getId(i));
}

void QuadraticFunction::add(std::string i, std::string j, double v) {
	_bilinearTerms.add(getId(i), getId(j), v);
}
void QuadraticFunction::set(std::string i, std::string j, double v) {
	_bilinearTerms.set(getId(i), getId(j), v);
}
double QuadraticFunction::get(std::string i, std::string j) const {
	return _bilinearTerms.get(getId(i), getId(j));
}

void QuadraticFunction::print(std::ostream & stream) const {
	if (std::abs(_cst) > 1e-10)
		stream << _cst;
	for (auto const & term : _linearTerms) {
		if (PrintCoeff(stream, term.second))
			stream << "." << getName(term.first);
	}
	for (auto const & term : _bilinearTerms) {
		if (term.first.first == term.first.second
				&& PrintCoeff(stream, term.second))
			stream << getName(term.first.first) << "²";
	}
	for (auto const & term : _bilinearTerms) {
		if (term.first.first != term.first.second
				&& PrintCoeff(stream, term.second))
			stream << getName(term.first.first) << getName(term.first.second);
	}
}

BiLinearTerms const & QuadraticFunction::getBilTerms() const {
	return _bilinearTerms;
}

LinearTerms const & QuadraticFunction::getLinTerms() const {
	return _linearTerms;
}

