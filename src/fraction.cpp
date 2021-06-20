#include "fraction.hpp"

void Fraction::set(int n, int d)
{
   this->numerator = n;
   this->denominator = d;
}

int Fraction::getN() const
{
   return this->numerator;
}

int Fraction::getD() const
{
   return this->denominator;
}

bool Fraction::operator <
(
   const Fraction& f
)
{
   float a = (float) this->getN() / (float) this->getD();
   float b = (float) f.getN() / (float) f.getD();
   return (a < b);
}

