#include "Polynomials.h"
#include <iostream>
using namespace std;

int main() {
  Polynomial A;
  cout << "Please enter the first polynomial (starting with the degree): " << endl;
  cin >> A;
  cout << "A = " << A << endl;

  Polynomial B;
  cout << "Please enter the second polynomial (starting with the degree): " << endl;
  cin >> B;
  cout << "B = " << B << endl;

  Polynomial C = A * B;
  cout << "C = A * B: " << C << endl;

  cout << "Specify an x value: ";
  int x;
  cin >> x;
  cout << "A(" << x << ") = " << A.calculate(x) << endl;
  cout << "The indefinite integral of A = " << A.buildIndefiniteIntegral() << endl;
  cout << "The definite integral of A(12.0, 0.0) = " << A.buildDefiniteIntegral(12.0, 0.0) << endl;
}
