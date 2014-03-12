/*
 * BilinearTerms.cc
 *
 *  Created on: 12 mars 2014
 *      Author: mruiz
 */

#include "BilinearTerms.h"

BiLinearTerms::BiLinearTerms() {
	// TODO Auto-generated constructor stub

}

BiLinearTerms::~BiLinearTerms() {
	// TODO Auto-generated destructor stub
}

void BiLinearTerms::add(size_t i, size_t j, double v) {
	(*this)[std::make_pair(std::min(i, j), std::max(i, j))] += v;
}

void BiLinearTerms::set(size_t i, size_t j, double v) {
	(*this)[std::make_pair(std::min(i, j), std::max(i, j))] = v;
}
double BiLinearTerms::get(size_t i, size_t j) const{
	const_iterator it(find(std::make_pair(std::min(i, j), std::max(i, j))));
	return it == end() ? 0 : it->second;
}
void BiLinearTerms::clear() {
	std::map<std::pair<size_t, size_t>, double>::clear();
}

BiLinearTerms::iterator BiLinearTerms::begin() {
	return std::map<std::pair<size_t, size_t>, double>::begin();
}
BiLinearTerms::iterator BiLinearTerms::end() {
	return std::map<std::pair<size_t, size_t>, double>::end();
}

BiLinearTerms::const_iterator BiLinearTerms::begin() const {
	return std::map<std::pair<size_t, size_t>, double>::begin();
}
BiLinearTerms::const_iterator BiLinearTerms::end() const {
	return std::map<std::pair<size_t, size_t>, double>::end();
}
