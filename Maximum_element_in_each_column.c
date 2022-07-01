
#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],i,j,colmax=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<c;j++)
	{
		colmax = a[0][0];
		for(i=0;i<r;i++)
		{
			if(colmax<a[i][j])
			colmax=a[i][j];
		//	colsum=colsum+a[j][i];
		}
		printf("%d",colmax);
    	printf("
");
	}
}