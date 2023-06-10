#pragma once
#include <stdio.h>
class Equations {
protected:
	double a, b, c;
public:
	Equations(double a, double b, double c) : a(a), b(b), c(c) {}


	virtual double GetResult() = 0;
};


struct LinearEquations : public Equations {
	LinearEquations(double a, double b, double c) : Equations(a, b, c) {}



	double GetResult() override {
		// dla da randomnoe kakoe to znachenie budet
		double d = (rand() % 50), x;
		cout << "The form of the linear equation is something like that: aX + b = cX + d" << endl;
		cout << "The equation is " << this->a << "x + " << this->b << " = " << this->c << "x + " << d << endl;

		if (this->a == this->c && this->b == d)
			throw "There are infinite solutions possible for this equation";
		else if (this->a == this->c)
			throw "This is a wrong equation";
		else {
			x = (d - this->b) / (this->a - this->c);
			cout << "The value of x = " << x << endl;
			return x;
		}
	}
};

struct QuadraticEquations : public Equations {
	QuadraticEquations(double a, double b, double c) : Equations(a, b, c) {}

	double GetResult() override {
		double x1, x2, discriminant;
		cout << "The form of the Quadratic Equations is like that: aX(kvadrat) + bX + c = 0" << endl;
		discriminant = ((this->b * this->b) - (4 * this->a * this->c));
		if (discriminant > 0)
		{
			x1 = (-this->b + sqrt(discriminant)) / (2 * this->a);
			x2 = (-this->b - sqrt(discriminant)) / (2 * this->a);
			cout << "X1: " << x1 << endl;
			cout << "X2: " << x2 << endl;
			return x1, x2;
		}
		else if (discriminant == 0) {
			cout << "Roots are real and same." << endl;
			x1 = -this->b / (2 * this->a);
			cout << "x1 = x2 =" << x1 << endl;
			return x1;
		}
		else {
			throw "Roots are complex";
		}
	}
};
