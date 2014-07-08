#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a[200][200];
	int s,n,p,q,i,j,temp;
	scanf("%d %d",&s,&n);
	for(i=0;i<s;i++)
	{
		for (j = 0; i < n; j++)
		{
			a[i][j] = 0;
		}
	}
	while(n--)
	{
		scanf("%d %d",&p,&q);
		for(i=0;i<n;i++)
		{
			for(j=1;j<s; j++)
			{
				temp = p - j;
				if(temp >= 0)
				{
					if(i>0)
					{
						if(a[i-1][temp] > a[i-1][j])
						{
							a[i][j] = a[i][j] + a[i-1][temp];
						}
					}
				}
			}
		}
	}
	return 0;
}
