#include<stdio.h>
int main(){
int n;
printf("Enter a year to check:");
scanf("%d",&n);
if(n%4==0)
{
printf("%d is Leap year ",n);
}
else{
printf("%d is not a leap year");
}
}
