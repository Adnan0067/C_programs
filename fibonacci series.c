// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int n1=0,n2=1,n3,i,number;
 printf("Enter the number until you want to print = ");
 scanf("%d",&number);
 printf("\n%d\n%d\n",n1,n2);
 for(i=2;i<number;i++)
 {
     
     n3=n1+n2;
     n1=n2;
     n2=n3;
     printf("%d\n",n3);
 }

    return 0;
}
