#include <map>
#include <string>
#include <iostream>
#include "romanos.hpp"
using namespace std;


string decimal_para_romanos(int num) {
    string str2;
    int romans[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string symbol[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i = 12;    
    while (num > 0) {
      int div = num/romans[i];
      num = num%romans[i];
      while(div--) str2 += symbol[i];
      i--;
    }
    return str2;
}


