/*
 * MyArray
 */
#include <iostream>
#include <iomanip>
#include <string.h>

template<class T>
class MyArray
{
   private:
      T* array;
      int n;
   public:
      /*
       * Constructor
       */
      MyArray()
      {
         this->array = NULL;
         this->n = 0;
      }

      /*
       * Constructor with Parameter
       */
      MyArray(int l)
      {
         this->array = new T[l];
         this->n = l;
      }

      /*
       * Destructor
       */
      ~MyArray()
      {
         if (this->array)
         {
            delete[] this->array;
            this->array = NULL;
            this->n = 0;
         }
      }

      /*
       * set
       */
      T* set(T* a, int l)
      {
         if (a && l > 0 && !this->array)
         {
            this->array = new T[l];
            if (this->array)
            {
               this->n = l;
               memcpy(this->array, a,
                     this->n * sizeof(T));
            }
         }
         return this->array;
      }

      /*
       * sort (descending)
       */
      void sort()
      {
         T temp;
         for (int i = 0; i < n - 1; i++)
         {
            for (int j = i + 1; j < n; j++)
            {
               if (this->array[i] < this->array[j])
               {
                  temp = this->array[i];
                  this->array[i] = this->array[j];
                  this->array[j] = temp;
               }
            }
         }
      }

      /*
       * Array Subscript
       */
      T& operator [] (const int& idx)
      {
         return this->array[idx];
      }

      /*
       * Extraction
       */
      friend std::ostream& operator<< (
            std::ostream& os,
            const MyArray& m)
      {
         if (m.array && m.n > 0)
         {
            for (int i = 0; i < m.n; i++)
            {
               os << m.array[i] << "\t";
            }
         }
         return os;
      }
};

