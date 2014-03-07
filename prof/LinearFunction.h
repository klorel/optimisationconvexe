/*
 * LinearFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef LINEARFUNCTION_H_
#define LINEARFUNCTION_H_

#include "ILinearFunction.h"

class LinearFunction: public ILinearFunction {
public:
	virtual double getValue(Point const & x) const;
	virtual void getGradient(Point const & x, Point & result) const;
public:
	virtual void clear();
	virtual void add(double v);
	virtual void set(double v);
	virtual double get() const;

	virtual void add(std::string id, double v);
	virtual void set(std::string id, double v);
	virtual double get(std::string id) const;

	virtual void print(std::ostream &) const;
	virtual Int2Double const & getLinearTerms() const;
public:
	LinearFunction();
	virtual ~LinearFunction();
private:
	double _cst;
	Int2Double _linearTerms;

};

inline std::ostream & operator<<(std::ostream & stream,
		LinearFunction const & rhs) {
	rhs.print(stream);
	return stream;
}

#endif /* LINEARFUNCTION_H_ */
