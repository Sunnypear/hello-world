/*����������������Ȼ����Ϊ��������:��������,��������֮��,��������֮���Լ��������ֵ�ƽ���Ͷ�������.����113����һ����������.��[100,9999]֮��:(1)���������ĸ���.(2)���г�������֮��.(3)���ĳ�������.*/
//2018/11/14 ����
/*int sum_bit(int num) {
  return 0;
}

int multi_bit(int num) {
  return 0;
}

int square_sum_bit(int num) {
  return 0;
}

bool isprime(int num) {
  return false;
}

int main() {
  if(isprime(113)&&isprime(sum_bit(113))&&isprime(multi_bit(113))&&isprime(square_sum_bit(113)))
    //to do sth
}*/
#include<stdio.h>
int main()
{
char ch[1010];
scanf("%s",ch);
int l=strlen(ch),i,j,t,s,a[l];
for(i=0;i<l;i++)
{
	a[i] = ch[i]-'0';
}
       int e=0,b=0,c=1,f=0,d=1;
       for(i=0;i<l-1;i++)
       {
       	d = d*10;
	   }
	   //printf("%d ",d);
      for(i=0;i<l;i++)
       { 
       	e=a[i]*d+e;
       	d = d/10;
       	b=a[i]+b;
       	c=a[i]*c;
       	f=a[i]*a[i]+f;
	   }
	   int g=2,lab=0,h=2,k=2,m=2;
	   for(i=0;i<e-3;i++)
	   { lab=0;
	     if(e%g==0)
	     {
	     	lab = 1;
	     	break;
		 }
		 g++;
       }
       if(lab==0)
       {
       	for(j=0;j<b-3;j++)
       	{
       		lab=0;
       		if(b%h==0)
       		{
       			lab=1;
       			break;
			   }
			   h++;
		}
			   if(lab ==0)
			   {
			   	for(t=0;t<c-3;t++)
			   	{
			   		lab=0;
			   		if(c%k==0)
			   		{
			   			lab=1;
			   			break;
					   }
					   k++;
				}
				if(lab==0)
				{
					for(s=0;s<f-3;s++)
					{
			       lab=0;
					if(f%m==0)
					{
						lab=1;
						break;
					}
					m++;
				}
				if(lab==0)
				{
					printf("��"); 
				}
				else
				{
					printf("����"); 
				}
			}
				else
				{
				printf("����");	
				}
				   }
				   else{
				   printf("����"); 
				   }
			}
				   else
				   {
				   	printf("����");
				   }
	   /*printf("%d ",e);
	   printf("%d ",b);
	   printf("%d ",c);
	   printf("%d",f);*/
	   return 0;
}
