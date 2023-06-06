/*
 * CCircle.h
 *
 */

#ifndef CCIRCLE_H_
#define CCIRCLE_H_

#include "CShape.h"

class CCircle: public CShape {
public:
	CCircle();
	virtual ~CCircle();

	int getRadius() const {
		return radius;
	}

	void setRadius(int radius) {
		this->radius = radius;
		setArea(radius * radius * 3.14);
		setGirth(radius * 2 * 3.14);
	}

	virtual void showInfo();
private:
	int radius;
};

#endif /* CCIRCLE_H_ */
