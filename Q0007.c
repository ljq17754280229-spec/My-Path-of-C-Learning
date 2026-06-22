#include <stdio.h>
#include <string.h>
int fun(int score[],int m, int below[])
{
    int average;
    int sum=0;
    int count=0;
    //求和
    for(int i=0;i<m;i++)
    {
        sum+=score[i];
    }
    average=sum/m;//求平均数
    //把小于平均数的数据放在count里
    for(int j=0;j<m;j++)
    {
        if(score[j]<average)
        {
            below[count]=score[j];
            count++;
        }
    }
    return count;
}
int main()
{	int i,n,below[9];
	int score[9];
	for(i=0;i<9;i++)
		scanf("%d",&score[i]);
	n=fun(score,9,below);
	for(i=0;i<n;i++)
		printf("%d ",below[i]);
    return 0;
}
