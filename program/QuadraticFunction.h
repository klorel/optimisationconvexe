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

	virtual void add(std::string i, double v);
	virtual void set(std::string i, double v);
	virtual double get(std::string i) const;

	virtual void add(std::string i, std::string j, double v);
	virtual void set(std::string i, std::string j, double v);
	virtual double get(std::string i, std::string j) const;

	virtual void print(std::ostream &) const;

	virtual IntMat2Double const & getBilTerms() const;
public:
	QuadraticFunction();
	virtual ~QuadraticFunction();
	IntMat2Double _bilinearTerms;
};

#endif /* QUADRATICFUNCTION_H_ */
