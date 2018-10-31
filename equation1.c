//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解
#include<stdio.h>
#include<math.h>
   void Realroot(double a,double b,double c);    /*函数声明*/ 
   int main(void)
{ 
  double a,b,c;                       /*a,b,c分别为x的二次项，一次项，常数项*/
  printf("请输入x的二次项系数a=");    /*提示输入二次项系数a*/ 
  scanf("%lf",&a);                    /*从键盘接受一个实数存入a*/  
  printf("请输入x的一次项系数b=");    /*提示输入一次项系数b*/
  scanf("%lf",&b);                    /*从键盘接受一个实数存入b*/ 
  printf("请输入常数项c=");           /*提示输入常数c*/
  scanf("%lf",&c);                    /*从键盘接受一个实数存入c*/ 
  Realroot(a,b,c);                    /*调用Realroot函数*/ 
  return 0;
}
   void Realroot(double a,double b,double c)
{
  double x1,x2;
  if (b*b-4*a*c<0)                     /*判断delta是否小于0*/ 
  {
  printf("此方程无实数根！\n");        /*若delta小于0，输出方程无实根*/ 
  }
  else
    {
  if (b*b-4*a*c==0)                    /*判断delta是否等于0*/ 
       {
   x1 = x2 = -b/(2*a);                 /*若delta等于0，x1=x2*/ 
  printf("x1=x2=%lf",x1);	
       }
  else
         {
  x1 = (-b+sqrt(b*b-4*a*c))/2*a;       /*若delta>=0,x1=*/
  x2 = (-b-sqrt(b*b-4*a*c))/2*a;       /*若delta>=0,x2=*/ 
  printf("x1=%lf,x2=%lf",x1,x2);
         }
     }    
}
