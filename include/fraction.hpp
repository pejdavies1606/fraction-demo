#include <iostream>
#include <iomanip>

class Fraction
{
   private:
      int numerator;
      int denominator;
   public:
      void set(int n, int d);
      int getN() const;
      int getD() const;
      bool operator < (const Fraction& f);
      /*
       * Extraction
       */
      friend std::ostream& operator << (
         std::ostream& os,
         const Fraction& f)
      {
         os << f.getN()
            << "/"
            << f.getD();
         return os;
      }
};

