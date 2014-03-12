/*
 * LinearTerms.h
 *
 *  Created on: 12 mars 2014
 *      Author: mruiz
 */

#ifndef LINEARTERMS_H_
#define LINEARTERMS_H_

#include "common.h"

class LinearTerms: protected std::map<size_t, double> {
public:
	LinearTerms();
	virtual ~LinearTerms();
public:
	void add(size_t i, double v);
	void set(size_t i, double v);
	double get(size_t) const;
	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;

	void clear();

};

#endif /* LINEARTERMS_H_ */
