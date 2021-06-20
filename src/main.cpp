/*
 * Main
 */
#include "array.hpp"
#include "fraction.hpp"

template <class T>
void testSort(MyArray<T>& ar)
{
   std::cout << "i: " << ar << std::endl;
   ar.sort();
   std::cout << "o: " << ar << std::endl;
}

int main()
{
   int mangInt[5] = { 4, -2, 5, 0, 6 };

   MyArray<int> ar1;
   ar1.set(mangInt, 5);
   testSort(ar1);

   double mangThuc[4] = { 6.0, -1.5, 0.5, -3 };

   MyArray<double> ar2;
   ar2.set(mangThuc, 4);
   testSort(ar2);

   Fraction mangPhanSo[4];
   mangPhanSo[0].set(1,2);
   mangPhanSo[1].set(5,6);
   mangPhanSo[2].set(1,9);
   mangPhanSo[3].set(16,4);

   MyArray<Fraction> ar3;
   ar3.set(mangPhanSo, 4);
   testSort(ar3);
}
