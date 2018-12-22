//回文数：正读与反读相等的数
//2018/11/14 更新
/*int main() {
    //to do sth
}*/
#include <stdio.h>
#include <string.h>
int main()
{
	char ch[1010];
    scanf("%s",ch);
    int l=strlen(ch),i,j=0,lab=0;
    for(i=0;i<l;i++)
    {    lab=0;
    	if(ch[j]==ch[l-j-1])
    	{
    	   lab=1;
		}
		j++;
	}
	if(lab==0)
	{
		printf("no");
	}
	else
	{printf("yes");
	}
	return 0;
 } 
