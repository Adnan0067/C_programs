// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n,rem,sum=0,o;
printf("Enter any number = ");
scanf("%d",&n);
o=n;
while(n!=0){
    rem=n%10;
    sum=sum+rem;
    n=n/10;
}
printf("digit sum of %d is %d",o,sum);
    return 0;
}
