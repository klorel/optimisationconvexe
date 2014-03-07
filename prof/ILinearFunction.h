/*
 * ILinearFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef ILINEARFUNCTION_H_
#define ILINEARFUNCTION_H_

#include "IFunction.h"

class ILinearFunction: public IFunction {
public:
	virtual void add(double v)= 0;
	virtual void set(double v)= 0;
	virtual double get() const= 0;

	virtual void add(std::string i, double v)= 0;
	virtual void set(std::string i, double v)= 0;
	virtual double get(std::string i) const = 0;

	virtual Int2Double const & getLinearTerms() const = 0;

	virtual ~ILinearFunction() {
	}
};

#endif /* ILINEARFUNCTION_H_ */
