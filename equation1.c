//���һԪ���η��̵ĸ�
//����sqrt()����
//ע����û�н�
#include<stdio.h>
#include<math.h>
   void Realroot(double a,double b,double c);    /*��������*/ 
   int main(void)
{ 
  double a,b,c;                       /*a,b,c�ֱ�Ϊx�Ķ����һ���������*/
  printf("������x�Ķ�����ϵ��a=");    /*��ʾ���������ϵ��a*/ 
  scanf("%lf",&a);                    /*�Ӽ��̽���һ��ʵ������a*/  
  printf("������x��һ����ϵ��b=");    /*��ʾ����һ����ϵ��b*/
  scanf("%lf",&b);                    /*�Ӽ��̽���һ��ʵ������b*/ 
  printf("�����볣����c=");           /*��ʾ���볣��c*/
  scanf("%lf",&c);                    /*�Ӽ��̽���һ��ʵ������c*/ 
  Realroot(a,b,c);                    /*����Realroot����*/ 
  return 0;
}
   void Realroot(double a,double b,double c)
{
  double x1,x2;
  if (b*b-4*a*c<0)                     /*�ж�delta�Ƿ�С��0*/ 
  {
  printf("�˷�����ʵ������\n");        /*��deltaС��0�����������ʵ��*/ 
  }
  else
    {
  if (b*b-4*a*c==0)                    /*�ж�delta�Ƿ����0*/ 
       {
   x1 = x2 = -b/(2*a);                 /*��delta����0��x1=x2*/ 
  printf("x1=x2=%lf",x1);	
       }
  else
         {
  x1 = (-b+sqrt(b*b-4*a*c))/2*a;       /*��delta>=0,x1=*/
  x2 = (-b-sqrt(b*b-4*a*c))/2*a;       /*��delta>=0,x2=*/ 
  printf("x1=%lf,x2=%lf",x1,x2);
         }
     }    
}
