/*
 * IQuadraticFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef IQUADRATICFUNCTION_H_
#define IQUADRATICFUNCTION_H_

#include "common.h"
#include "IFunction.h"

class IQuadraticFunction: public IFunction {

public:
	virtual void clear()= 0;
	virtual void add(double v)= 0;
	virtual void set(double v)= 0;
	virtual double get() const= 0;

	virtual void add(size_t i, double v)= 0;
	virtual void set(size_t i, double v)= 0;
	virtual double get(size_t i) const = 0;

	virtual void add(size_t i, size_t j, double v)= 0;
	virtual void set(size_t i, size_t j, double v)= 0;
	virtual double get(size_t i, size_t j) const = 0;

	virtual void print(std::ostream &) const= 0;
};

#endif /* IQUADRATICFUNCTION_H_ */
