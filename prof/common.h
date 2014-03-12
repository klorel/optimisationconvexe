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
#include <set>
#include <iostream>
#include <cassert>

typedef std::vector<double> Point;
typedef std::map<size_t, double> Int2Double;

typedef std::map<std::pair<size_t, size_t>, double> IntMat2Double;
typedef std::map<std::string, size_t> Str2Int;
typedef std::map<size_t, std::string> Int2Str;

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
