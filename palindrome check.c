// Online C compiler to run C program online
#include <stdio.h>

int main() {
      int n,rev=0,rem,o;
   printf("Enter a int = ");
   scanf("%d",&n);
   o=n;
   while(n!=0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
if(rev==o)
{
    printf("The %d is palindrome",o);
}
else{
    printf("The %d is not a palindrome",o);
}
    return 0;
}
