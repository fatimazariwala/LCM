#include<stdio.h>
int lcm(int a,int b);
  int main()
  {
      int num2,num1;
      printf("Enter first number: ",num2);
      scanf("%d",&num2);
      printf("\nEnter second number: ",num1);
      scanf("%d",&num1);
      printf("\nLCM : %d",lcm(num2,num1));
  }
 int lcm(int a ,int b)
 {
     static int x = 0;
    x=x+a;
     if(x%a==0 && x%b==0)
        return x;
     return lcm(a,b);
 }
