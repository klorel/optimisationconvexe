/*
 * QuadraticFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef QUADRATICFUNCTION_H_
#define QUADRATICFUNCTION_H_

#include "IQuadraticFunction.h"

class QuadraticFunction: public IQuadraticFunction {
public:
	virtual void clear();
	virtual void add(double v);
	virtual void set(double v);
	virtual double get() const;

	virtual void add(size_t i, double v);
	virtual void set(size_t i, double v);
	virtual double get(size_t i) const;

	virtual void add(size_t i, size_t j, double v);
	virtual void set(size_t i, size_t j, double v);
	virtual double get(size_t i, size_t j) const;

	virtual void print(std::ostream &) const;
public:
	QuadraticFunction();
	virtual ~QuadraticFunction();
};

#endif /* QUADRATICFUNCTION_H_ */
