// Online C compiler to run C program online
#include <stdio.h>

int main() {
int fact,i,j,n;
printf("Enter a limit = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=0;
    for(j=1;j<=n;j++)
    {
        if(i%j==0){
            fact++;
        }
   
    }
     if(fact==2){
        printf("\n%d",i);
        
    }
}

    return 0;
}