#include <stdio.h>
#include <math.h>
//Compiler version gcc  6.3.0

int main()
{
  int a,b,c,k,i;
  printf("enter 3 digit number");
  scanf("%d",&a);
  k=0;
  b=strlen(a);
  for(i=0;i<3;i++)
  {
    c=a%10;
    k=10*k+c;
    a=floor(a/10);
    
  }
  printf("palindrome of %d",k);
  
  return 0;
}
