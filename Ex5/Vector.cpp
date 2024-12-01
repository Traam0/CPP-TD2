#include "Vector.h"
#include <iostream>
#include <cmath>


Point Vector::getP1() const {
	return this->_p1;
}

Point Vector::getP2() const {
	return this->_p2;
}

void Vector::setP1(const Point& value) {
	this->_p1 = value;
}

void Vector::setP2(const Point& value) {
	this->_p2 = value;
}

double Vector::CalculateNorm() const {
	double norm =  sqrt(pow((this->_p2.getX() - this->_p1.getX()), 2) + pow((this->_p2.getY() - this->_p1.getY()), 2));
	std::cout << "La norm du vector est : " << norm;
	return norm;
}	