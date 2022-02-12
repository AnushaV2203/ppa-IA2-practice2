#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the side o triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if (a != b && a != c && b != c)
  {
    return 1;
  }
  return 0;
  }

void output(int a,int b,int c,int isscalene)
{
  printf("%d %d %d is %d",a,b,c,isscalene);
  return;
}
int main()
{


  int a= input_side();
  int b=input_side();
  int c=input_side();
  check_scalene(a,b,c);
  void output();
  return 0;

}