/*
 * CShape.h
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

	virtual void showInfo() = 0;  // 宣告為純虛擬函式，CShape就變成抽象類別

protected:
	void setArea(double area) {
		this->area = area;
	}
	void setGirth(double girth) {
		this->girth = girth;
	}
private:
	double girth;
	double area;
};


#endif /* CSHAPE_H_ */
