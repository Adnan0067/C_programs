// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n,o,rem,res=0;
printf("enter an integer = ");
scanf("%d",&n);
o=n;
while(n!=0)
{
    rem=n%10;
    res=res+rem*rem*rem;
    n=n/10;
}
if(res==o)
{
    printf("The Integer is armstrong");
}
else{
    printf("The integer is not an armstrong");
}    
    return 0;
}
