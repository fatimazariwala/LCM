#include<stdio.h>
int lcm(int a,int b);
  int main()
  {
       int num2=12,num1=30;
      printf("Input First number : %d",num2);
      printf("\nInput Second number : %d",num1);
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
