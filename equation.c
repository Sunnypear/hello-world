//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include<stdio.h>
#include<math.h>
     
     int main(void)    
{
	 double a,b,c,d,e,f,x,y;
     printf("方程一X的系数a=",a);  /*提示输入x的系数a*/
     scanf("%lf",&a);              /*从键盘接受一个实数存入a*/ 
     printf("方程二X的系数d=",d);  /*提示输入x的系数d*/
     scanf("%lf",&d);              /*从键盘接受一个实数存入d*/
     printf("方程一Y的系数b=",b);  /*提示输入y的系数b*/
     scanf("%lf",&b);              /*从键盘接受一个实数存入b*/
     printf("方程二Y的系数e=",e);  /*提示输入y的系数e*/
     scanf("%lf",&e);              /*从键盘接受一个实数存入e*/
     printf("方程一常数c=",c);     /*提示输入常数c*/ 
     scanf("%lf",&c);              /*从键盘接受一个实数存入c*/
     printf("方程二常数f=",f);     /*提示输入常数f*/ 
     scanf("%lf",&f);              /*从键盘接受一个实数存入f*/
     if (b*d-a*e != 0)             /*判断两方程是否成比例*/ 
      {
	  y = (c*d-a*f)/(b*d-a*e);     /*求x的值 ，求y的值*/ 
      x = (b*f-c*e)/(d*b-a*e);        
     printf("x=%lf  y=%lf",x,y);   /*输出x,y*/ 
      }
	 else   
	 printf("方程数条件不够\n");   /*提示条件不足*/ 
	 
     
   
     return 0;
}                                
