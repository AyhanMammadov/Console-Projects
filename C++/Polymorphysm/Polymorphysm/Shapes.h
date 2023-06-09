#pragma once
struct Shape {

	virtual double GetPerimetr() = 0;
	virtual double GetArea() = 0;

	virtual void ShowShape() = 0;

};


class Square : public Shape {
	double length;
public:
	Square(double length) {
		this->length = length;
	}

	double GetPerimetr() override {
		return (this->length * 4);
	}
	double GetArea() override {
		return(this->length * this->length);
	}

	void ShowShape() override {
		for (int i = 0; i < this->length; i++)
			cout << "*" << " ";
		cout << endl;
		for (int i = 1; i < this->length - 1; i++)
		{
			cout << "*" << " ";
			for (int i = 1; i < this->length - 1; i++)
				cout << "  ";

			cout << "*" << endl;
		}
		for (int i = this->length; i > 0; i--)
			cout << "*" << " ";
		cout << endl;
	}
};




class Rectangle :public Shape {
	double lengthA;
	double lengthB;
public:
	Rectangle(double lengthA, double lengthB) : lengthA(lengthA), lengthB(lengthB) {}

	double GetPerimetr() override {
		return ((this->lengthA * 2) + (this->lengthB * 2));
	}
	double GetArea() override {
		return (this->lengthA * this->lengthB);
	}

	void ShowShape() override {
		for (int i = 0; i < this->lengthA; i++)
			cout << "*" << " ";
		cout << endl;
		for (int i = 1; i < this->lengthB - 1; i++)
		{
			cout << "*" << " ";
			for (int i = 1; i < this->lengthB * 2; i++)
				cout << "  ";

			cout << "*" << endl;
		}
		for (auto i = this->lengthA; i > 0; i--)
			cout << "*" << " ";
		cout << endl;
	}
};






class Triangle : public Shape {
	double sideA;
	double sideB;
	double sideC;
	double height;
public:
	Triangle(double sideA, double sideB, double sideC, double height) :
		sideA(sideA), sideB(sideB), sideC(sideC), height(height) {}

	double GetPerimetr()override {
		return this->sideA + this->sideB + this->sideC;
	}
	double GetArea() override {
		return (this->sideA * this->height) / 2;
	}
	void ShowShape() override {
		cout << "triangle" << endl;
	};

};


class Circle : public Shape {
	double radius;
public:
	Circle(double radius) : radius(radius) {}

	double GetArea() override {
		double area;
		area = (3.14 * (this->radius * this->radius));
		return area;
	}

	double GetPerimetr() override {
		throw "Circle have not a Perimetr!";
	}



	void ShowShape() override {
		cout << "Circle" << endl;
	}
};



