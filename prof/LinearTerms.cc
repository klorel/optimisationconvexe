/*
 * LinearTerms.cc
 *
 *  Created on: 12 mars 2014
 *      Author: mruiz
 */

#include "LinearTerms.h"

LinearTerms::LinearTerms() {
	// TODO Auto-generated constructor stub

}

LinearTerms::~LinearTerms() {
	// TODO Auto-generated destructor stub
}

void LinearTerms::clear() {
	std::map<size_t, double>::clear();
}
void LinearTerms::add(size_t i, double v) {
	(*this)[i] += v;
}
double LinearTerms::get(size_t i) const {
	const_iterator it(find(i));
	return it == end() ? 0 : it->second;
}
void LinearTerms::set(size_t i, double v) {
	(*this)[i] = v;
}

LinearTerms::iterator LinearTerms::begin() {
	return std::map<size_t, double>::begin();
}
LinearTerms::iterator LinearTerms::end() {
	return std::map<size_t, double>::end();
}

LinearTerms::const_iterator LinearTerms::begin() const {
	return std::map<size_t, double>::begin();
}
LinearTerms::const_iterator LinearTerms::end() const {
	return std::map<size_t, double>::end();
}
