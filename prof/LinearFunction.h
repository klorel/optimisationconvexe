/*
 * LinearFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef LINEARFUNCTION_H_
#define LINEARFUNCTION_H_

#include "IFunction.h"

class LinearFunction: public IFunction {
public:
	virtual size_t getN() const;
	virtual size_t getM() const;

	virtual double getValue(Point const & x) const;
	virtual void getGradient(Point const & x, Point & result) const;
public:
	void clear();
	void add(double v);
	void set(double v);
	double get() const;

	void add(size_t id, double v);
	void set(size_t id, double v);
	double get(size_t id) const;

	void print(std::ostream &) const;
public:
	LinearFunction();
	virtual ~LinearFunction();
private:
	size_t _n;
	double _cst;
	Int2Double _coeff;
};

inline std::ostream & operator<<(std::ostream & stream,
		LinearFunction const & rhs) {
	rhs.print(stream);
	return stream;
}

#endif /* LINEARFUNCTION_H_ */
