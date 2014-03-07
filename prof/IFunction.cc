/*
 * IFunction.cc
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#include "IFunction.h"

IFunction::IFunction() {
	clear();
}

IFunction::~IFunction() {
	// TODO Auto-generated destructor stub
}

std::string IFunction::getName(size_t id) const {
	Int2Str::const_iterator it(_names.find(id));
	assert(
			it != _names.end()
					&& "YOU SHOULD NOT TRY TO GET A NAME OF A NON REGISTERED VARIABLE");
	return it->second;
}

size_t IFunction::getId(std::string const & name) {
	Str2Int::const_iterator it(_ids.find(name));
	if (it == _ids.end()) {
		_ids[name] = _n;
		_names[_n] = name;
		++_n;
		return _n - 1;
	} else {
		return it->second;
	}

}
size_t IFunction::getIdConst(std::string const & name) const {
	Str2Int::const_iterator it(_ids.find(name));
	return it->second;

}
size_t IFunction::getN() const {
	return _n;
}
void IFunction::clear() {
	_n = 0;
	_names.clear();
	_ids.clear();
}
bool IFunction::isLinear() const {
	return false;
}
bool IFunction::isQuadratic() const {
	return false;
}
bool IFunction::isQuadraticSDP() const {
	return false;
}
bool IFunction::isQuadraticSDN() const {
	return false;
}
bool IFunction::isConvexe() const {
	return false;
}
bool IFunction::isConcave() const {
	return false;
}
