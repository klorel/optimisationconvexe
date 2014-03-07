/*
 * common.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <cstdlib>
#include <cstdio>
#include <cmath>

#include <vector>
#include <map>
#include <iostream>

typedef std::vector<double> Point;
typedef std::map<size_t, double> Int2Double;

inline bool PrintCoeff(std::ostream & stream, double coeff) {
	if (std::abs(coeff) > 1e-10) {
		if (coeff == 1) {
			stream << "+";
		} else if (coeff == -1) {
			stream << "-";
		} else if (coeff > 0) {
			stream << "+" << coeff;
		} else {
			stream << coeff;
		}
		return true;
	} else {
		return false;
	}
}

#endif /* COMMON_H_ */
