#include <iostream>
#include <stdio.h>   
#include <math.h>  

#define PI 3.14159265

void splitNumOnValues(int num); // Разделя на числа

int main() {

int max = INT_MAX;
int min = INT_MIN;

double param, result;
param = 30.0;
result = sin (param*PI/180);
printf ("The sine of %f degrees is %f.\n", param, result );

  result = cos ( param * PI / 180.0 );
  printf ("The cosine of %f degrees is %f.\n", param, result );

return 0;
}

void splitNumOnValues(int num) {

int units = num % 10 ; // единици
int tens = num / 10 % 10 ; // десетици
int hundreds = num / 100 % 10 ; // стотици
int thousands = num / 1000 ; // хилядни

}