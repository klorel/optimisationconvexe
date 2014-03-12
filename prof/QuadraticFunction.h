/*
 * QuadraticFunction.h
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#ifndef QUADRATICFUNCTION_H_
#define QUADRATICFUNCTION_H_

#include "IFunction.h"
#include "BilinearTerms.h"
#include "LinearTerms.h"
class QuadraticFunction: public IFunction {
public:
	void clear();
	void add(double v);
	void set(double v);
	double get() const;

	void add(std::string i, double v);
	void set(std::string i, double v);
	double get(std::string i) const;

	void add(std::string i, std::string j, double v);
	void set(std::string i, std::string j, double v);
	double get(std::string i, std::string j) const;

	void print(std::ostream &) const;

	BiLinearTerms const & getBilTerms() const;

	LinearTerms const & getLinTerms() const;

	void eigenValue(std::set<double> & result)const;
public:
	QuadraticFunction();
	~QuadraticFunction();
	double _cst;
	LinearTerms _linearTerms;
	BiLinearTerms _bilinearTerms;
};

inline std::ostream & operator<<(std::ostream & stream,
		QuadraticFunction const & rhs) {
	rhs.print(stream);
	return stream;
}

#endif /* QUADRATICFUNCTION_H_ */
