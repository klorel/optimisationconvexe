/*
 * IQuadraticFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef IQUADRATICFUNCTION_H_
#define IQUADRATICFUNCTION_H_

#include "common.h"
#include "ILinearFunction.h"

class IQuadraticFunction: public ILinearFunction {
public:
	virtual void add(std::string i, std::string j, double v)= 0;
	virtual void set(std::string i, std::string j, double v)= 0;
	virtual double get(std::string i, std::string j) const = 0;

	virtual IntMat2Double const & getBilTerms() const = 0;

	virtual ~IQuadraticFunction() {
	}
};

#endif /* IQUADRATICFUNCTION_H_ */
