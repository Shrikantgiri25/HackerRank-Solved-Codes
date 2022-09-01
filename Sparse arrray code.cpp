#include<stdio.h>
#include<string.h>
int main()
{
	int siz,i;
	printf("Enter size of string\n");
	scanf("%d",&siz);
	char str[siz][20];
	for(i=0;i<siz;i++)
	{
		scanf("%s",str[i]);
	}
	int siz2;
	printf("Enter size of query\n");
	scanf("%d",&siz2);
	char qr[siz2][20];
	for(i=0;i<siz2;i++)
	{
		scanf("%s",qr[i]);
	}
	int j,z=NULL,k=0,count=-1;
	int ans[siz2];
	for(i=0;i<siz2;i++)
	{
		for(j=0;j<siz;j++)
		{
			count = strcmp(qr[i],str[j]);
			if(count == 0)
			{
				z=z+1;
				count =-1;
			}
		}
		printf("%d\n",z);
		z=NULL;
	}
	k++;
}
