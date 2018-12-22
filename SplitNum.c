//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
/*int main() {
    //to do sth
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1010];
	scanf("%s",ch);
	int l=strlen(ch),i,a[l];
    for(i=0;i<l;i++)
	{
		a[i] = ch[i]-'0';
		printf("%d ",a[i]);
		}	
		return 0;
 } 
