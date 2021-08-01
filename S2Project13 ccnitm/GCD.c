#include<stdio.h>
main()
{
  int a,b,gcd,lcm,i;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  for(i=1;i<=a && i<=b;++i){
       if(a%i==0 && b%i==0)
          gcd=i;
          lcm=(a*b)/gcd;
  }
  printf("GCD of %d and %d is %d \n",a,b,gcd);
  printf("LCM of %d and %d is %d",a,b,lcm);
}
