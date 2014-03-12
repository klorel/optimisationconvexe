/*
 * QuadraticFuncionarma.cc
 *
 *  Created on: 12 mars 2014
 *      Author: mruiz
 */

#include "QuadraticFunction.h"

#include "armadillo"

using namespace arma;

void QuadraticFunction::eigenValue(std::set<double> & result) const {

	arma::mat A(getN(), getN());
	A.zeros();
	for (auto const & term : _bilinearTerms) {
		if (term.first.first != term.first.second) {
			A(term.first.first, term.first.second) = term.second * 0.5;
			A(term.first.second, term.first.first) = term.second * 0.5;
		} else
			A(term.first.second, term.first.first) = term.second;
	}
	vec eigval;
	mat eigvec;

	eig_sym(eigval, eigvec, A);
	result.clear();
	for (auto const & val : eigval) {
		result.insert(val);
	}
}
