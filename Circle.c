#include<stdio.h>
#define p 3.14
int main(){
    int r,d;
    float c;
    printf("Enter the radius of a circle :");
    scanf("%d",&r);
    d=2*r;
    printf("Diameter of that circle is %d\n",d);
    c=2*p*r;
printf("Circumference = %.2f\n",c);
    float a;
    a= p * r*r;
    printf("the area of a circle is %.2f",a);
    return 0;
}