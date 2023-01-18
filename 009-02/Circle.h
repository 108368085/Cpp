class Circle{
private:
	double girth;
	double area;
	double volume;
public:
	Circle()
	{
		girth = 123;
		area = 66;
		volume = 88;
	}

	int radius;
	int height;
	double getGirth(){
		return radius * 2 * 3.14159;
	}
	double getArea(){
		return radius * radius * 3.14159;
	}
	double getVolume(){
		return getArea() * height;
	}
	double getAlden(){
		return area * girth * volume;
	}
	int compare(Circle c){
		int i = 0;
		if(radius > c.radius){
			i = 1;
		}else if(radius < c.radius){
			i = -1;
		}
		c.radius = 100;
		return i;
	}
	int compare2(Circle * pc){
		int i = 0;
		if(radius > pc->radius){
			i = 1;
		}else if(radius < pc->radius){
			i = -1;
		}
		pc->radius = 100;
		return i;
	}

	Circle copy(){   // 此return是給一個物件
		Circle c;
		c.radius = radius;
		return c;
	}
	void copy2(Circle * pc){
		pc->radius = radius;
	}
	Circle * copy3(Circle * pc){  // 此return是給一個物件的記憶體位址
		pc->radius = radius;
		return pc;
	}
};