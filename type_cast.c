
#include <stdio.h>

void printRatio(int numer, int denom){
  double ratio;
  ratio = numer/denom;
  printf("Ratio, %1d/%1d                        %5.2lf\n", numer, denom, ratio);

  // Type cast when typing double
  // Implicit type conversion
  ratio = numer/((double) denom);
  printf("Ratio, %1d/((double) %1d)             %5.2lf\n", numer, denom, ratio);

  // Explicit type conversion
  ratio = ((double) numer)/((double) denom);
  printf("Ratio, ((double)%1d)/((double) %1d):  %5.2lf\n", numer, denom, ratio);
}

// Promotion - take one data type and change it to larger type

int main(void){
  int num = 5, den = 2;
  printRatio(num, den);
  return(0);
}
