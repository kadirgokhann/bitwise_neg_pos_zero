#include <stdio.h>
#include <stdint.h>
int positivity(int8_t x)
{
    // Returns 1 if x is positive,
    //         0 if x is zero,
    //        -1 if x is negative. 
      int8_t y=x>>8;
      int8_t z=x|y;
      int8_t m=!!z;
      int8_t p=m|z;
      int8_t s=0b10000001;
      int8_t t=s&p;
      int8_t d=t>>7;
      int8_t result=d|t;
      return result;
}
int main(){
    int8_t x=-10;
    for(;x<10;x++){
        int result=positivity(x);
        printf("for %d, result is %d\n", x,result);
    }
}
