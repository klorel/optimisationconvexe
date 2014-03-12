/*
 * TP1.cc
 *
 *  Created on: 7 mars 2014
 *      Author: mruiz
 */

#include "TP1.h"

void TP1::GetExample1(QuadraticFunction & f) {
	f.clear();
	f.add("x", "x", 2);
	f.add("y", "y", -2);
	f.add("z", "z", -6);
	f.add("x", "y", 3);
	f.add("x", "z", -4);
	f.add("y", "z", 7);
}
void TP1::GetExample2(QuadraticFunction & f) {
	f.clear();
	f.add("x", "x", 3);
	f.add("y", "y", 3);
	f.add("z", "z", 3);
	f.add("x", "y", 2);
	f.add("x", "z", -2);
	f.add("y", "z", 2);

}
void TP1::GetExample3(QuadraticFunction & f) {
	f.clear();
	f.add("x", "y", 1);
	f.add("y", "z", 1);
	f.add("z", "t", 1);
	f.add("t", "x", 1);

}
