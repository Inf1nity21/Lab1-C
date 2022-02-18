#include <stdio.h>
#include <stdlib.h>

int main(){
  float q,l,p,q1,l1,p1,call;
  scanf("%f%f%f",&q,&l,&p);
  q1=q*0.2;
  l1=l*0.3;
  p1=p*0.5;
  call=(q1+l1+p1);
    printf("MEDIA = %.1f", call);
}
