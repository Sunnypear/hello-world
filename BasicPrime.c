//素数是只有1和本身是因子的数
//2018/11/14 更新
/*int main() {
    //to do sth
}*/
#include<stdio.h>
int main()
{
	int num,i,b=2,lab=0;
	scanf("%d",&num);
	for(i=0;i<num-1;i++)
	{   
	    lab=0;
	    int a=num%b;
		b++;
		if(b==num)
		{   
			break;
			}	
		if(a==0)
		{   
		    lab=1;
			break;
		}
	}
	if(lab==1&&num!=2)
	{
		printf("不是素数"); 
	}
	else
	printf("是素数");
	return 0;
 } 
