#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
if(n%2==0 ){
    printf("The number is Even ");
    if(n%5==0){
        printf("And divisible by 5");
    }
    else printf(" But not divisible by 5");
}
else {
    printf("The number is Odd");
    if(n%5==0){
        printf(" And divisible by 5");}
      else  printf(" But not divisible by 5");
    }
    return 0;
}