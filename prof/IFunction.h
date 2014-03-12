/*
 * IFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef IFUNCTION_H_
#define IFUNCTION_H_

#include "common.h"
class QuadraticFunction;
class IFunction {
public:
	std::string getName(size_t id) const;
	size_t getN() const;
	size_t getId(std::string const &);
	size_t getId(std::string const &) const;

	virtual double getValue(Point const & x) const ;
	virtual void getGradient(Point const & x, Point & result) const;
	virtual void getHessian(Point const & x, QuadraticFunction & result) const;

	virtual void print(std::ostream &) const = 0;
	virtual void clear();

	virtual bool isLinear() const;
	virtual bool isQuadratic() const;
	virtual bool isQuadraticSDP() const;
	virtual bool isQuadraticSDN() const;
	virtual bool isConvexe() const;
	virtual bool isConcave() const;
public:
	IFunction();
	virtual ~IFunction();
private:
	size_t _n;
	Str2Int _ids;
	Int2Str _names;
};

#endif /* IFUNCTION_H_ */
