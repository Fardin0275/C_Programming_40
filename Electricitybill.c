#include<stdio.h>
int main(){
    float unit,bill;
    printf("Enter your used electricity unit :");
    scanf("%f",&unit);
    if(0<=unit<=50){
        bill=unit*0.50;
    }
    else if(50<unit<=150){
        bill=unit*0.75;
    }
    else if(150<unit<=250){
        bill=unit*1.20;
}
  else {
        bill=unit*1.50;
    }
    printf("your bill without additional charge = %.2f\n",bill);
    float charge=bill*0.2;
    bill=bill+charge;
    printf("Your bill with additional charge = %.2f",bill);
    return 0;
}