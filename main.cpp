#include <iostream>
using namespace std;

struct Fraction {
  int numerator;   // numerator
  int denominator;    // denominator

  void displayFraction(char c)
  {
      cout << "Resultant fractional number: " << numerator << " " << c << " " << denominator <<endl;
  }
};

Fraction multiply(Fraction d1, Fraction d2)
{
  Fraction rd;
  rd.numerator = d1.numerator * d2.numerator;
  rd.denominator = d1.denominator * d2.denominator;
  return rd;
}

int main()    // program to sum two distances (in inches and feets) using structures
{
  Fraction d1, d2, dr;
  char c;
  cout << "Enter the first fractional number: " << endl;
  cin >> d1.numerator >> c >> d1.denominator;
  cout << "Enter the second fractional number: " << endl;
  cin >> d2.numerator >> c >> d2.denominator;
  dr = multiply(d1, d2);

  dr.displayFraction(c);

  return 0;
}
