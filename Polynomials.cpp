#import "Polynomials.h"
#import <iostream>
#import <Math.h>

Polynomial::Polynomial() {
  degree = 0;
  for(int i = 0; i < MAX_DEGREE; i++) {
    coeffecient[i] = 0.0;
  }
}

Polynomial Polynomial::operator*(const Polynomial& aRight) const {
  Polynomial resultPoly;
  resultPoly.degree = (*this).degree + aRight.degree;
  for(int i = 0; i <= (*this).degree; i++) {
    for(int j = 0; j <= aRight.degree; j++) {
      resultPoly.coeffecient[i + j] += (*this).coeffecient[i] * aRight.coeffecient[j];
    }
  }
  return resultPoly;
}

std::istream& operator>>(std::istream& aIStream, Polynomial& aPoly) {
  aIStream >> aPoly.degree;
  for(int i = 0; i <= aPoly.degree; i++) {
    aIStream >> aPoly.coeffecient[i];
  }
  return aIStream;
}

std::ostream& operator<<(std::ostream& aOStream, const Polynomial& aPoly) {
  for(int i = 0; i <= aPoly.degree; i++) {
    if(aPoly.coeffecient[i] != 0.0) {
      aOStream << aPoly.coeffecient[i] << "x^" << i;
      if(i != (aPoly.degree)) {
        aOStream << " + ";
      }
    }
  }
  return aOStream;
}

double Polynomial::calculate(double aX) const {
  double result = 0.0;
  for(int i = 0; i <= (*this).degree; i++) {
    result += (*this).coeffecient[i] * pow(aX, i);
  }
  return result;
}

Polynomial Polynomial::buildIndefiniteIntegral() const {
  Polynomial resultPoly;
  resultPoly.degree = (*this).degree + 1;
  for(int i = 0; i <= (*this).degree; i++) {
    resultPoly.coeffecient[i + 1] = ((*this).coeffecient[i] / (i + 1));
  }
  return resultPoly;
}

double Polynomial::buildDefiniteIntegral(double aHighX, double aLowX) const {
  return (((*this).buildIndefiniteIntegral().calculate(aHighX)) - ((*this).buildIndefiniteIntegral().calculate(aLowX)));
}
