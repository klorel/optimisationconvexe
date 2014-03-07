/*
 * IFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef IFUNCTION_H_
#define IFUNCTION_H_

#include "common.h"

class IFunction {
public:
	virtual size_t getN() const = 0;
	virtual size_t getM() const = 0;

	virtual double getValue(Point const & x) const = 0;
	virtual void getGradient(Point const & x, Point & result) const = 0;

	virtual bool isLinear() const {
		return false;
	}
	virtual bool isQuadratic() const {
		return false;
	}
	virtual bool isQuadraticSDP() const {
		return false;
	}
	virtual bool isQuadraticSDN() const {
		return false;
	}
	virtual bool isConvexe() const {
		return false;
	}
	virtual bool isConcave() const {
		return false;
	}
public:
	IFunction();
	virtual ~IFunction();
};

#endif /* IFUNCTION_H_ */
