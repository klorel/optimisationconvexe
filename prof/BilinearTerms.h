/*
 * BilinearTerms.h
 *
 *  Created on: 12 mars 2014
 *      Author: mruiz
 */

#ifndef BILINEARTERMS_H_
#define BILINEARTERMS_H_

#include "common.h"

class BiLinearTerms: protected std::map<std::pair<size_t, size_t>, double> {
public:
	BiLinearTerms();
	virtual ~BiLinearTerms();
public:
	void add(size_t i, size_t j, double v);
	void set(size_t i, size_t j, double v);
	double get(size_t i, size_t j) const;

	void clear();

	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;
};

#endif /* BILINEARTERMS_H_ */
