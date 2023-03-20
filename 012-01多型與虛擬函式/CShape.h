/*
 * CShape.h
 *
 *  Created on: 2021�~11��26��
 *      Author: yuyun
 */

#ifndef CSHAPE_H_
#define CSHAPE_H_

class CShape {
public:
	CShape();
	virtual ~CShape();

	double getArea() const {
		return area;
	}

	double getGirth() const {
		return girth;
	}

	virtual void showInfo();
	
protected:
	void setArea(double area) {
		this->area = area;
	}
	void setGirth(double girth) {
		this->girth = girth;
	}
private:
	double girth = 0;
	double area = 0;
};

#endif /* CSHAPE_H_ */
