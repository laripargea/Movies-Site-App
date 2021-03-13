#include "Validation.h"

Validation::Validation() {
    //
    //default constructor
    //
}

//
//validates length of string
//
bool Validation::ensure_valid_length(string s) {
   if (s.length()>10)
          return false;

    return true;
}

//
//validates sign of integer
//
bool Validation::ensure_positive(int a) {
     if (a <= 0)
         return false;
     return true;
}


