#pragma once
#include <iostream>
#define MAX_DEGREE 22
using namespace std;

class Polynomial {
  private:
    int degree;
    double coeffecient[MAX_DEGREE];

  public:
    Polynomial();
    Polynomial operator*(const Polynomial& aRight) const;
    friend std::istream& operator>>(std::istream& aIStream, Polynomial& aPoly);
    friend std::ostream& operator<<(std::ostream& aOStream, const Polynomial& aPoly);
    double calculate(double aX) const;
    Polynomial buildIndefiniteIntegral() const;
    double buildDefiniteIntegral(double aLowX, double aHighX) const;
};
