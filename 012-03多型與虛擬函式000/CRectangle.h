/*
 * CRectangle.h
 *
 *  Created on: 2021¦~11¤ë27¤é
 *      Author: yuyun
 */

#ifndef CRECTANGLE_H_
#define CRECTANGLE_H_

#include "CShape.h"

class CRectangle: public CShape {
public:
	CRectangle();
	virtual ~CRectangle();

	int getLength() const {
		return length;
	}

	void setValues(int length, int width) {
		this->length = length;
		this->width = width;
		setArea(length * width);
		setGirth((length + width) * 2);
	}

	int getWidth() const {
		return width;
	}

	virtual void showInfo();
private:
	int length;
	int width;
};

#endif /* CRECTANGLE_H_ */
