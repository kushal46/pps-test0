#include <stdio.h>

int input()
{ int num;
  printf("Enter a Number:\n");
  scanf("%d",&num);
  return num;
}

int add( int a,int b)
{
  int sum;
  sum = a + b;
  return sum;
}

void output(int a,int b, int sum)
{
 
  printf("the sum of %d + %d is %d\n", a,b,sum);

}



int main()
{
  int num1,num2,;
num1 = input();
num2 = input();
int sum;
sum = add(int a,int b);
output(int a,int b,int sum);

  return 0;
}