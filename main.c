#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void bin(int[],int);

int main()
{
	int a[9];
	int i;
	int sum=0;
	while(scanf("%d",&a[0])!=EOF)
	{
		sum=a[0];
		for(i=1;i<9;i++)
		{
		    scanf("%d",&a[i]);
			sum+=a[i];
		}
		bin(a,sum);
	}
	return 0;
}

void bin(int a[],int sum)
{
	int move=0;
	int temp=0;
	int index=0;//update
	int i,j,k;
	int i1,j1,k1;
	char str[4]="BGC";
	for(i=0;i<3;i++)
	{ 
	  for(j=3;j<6;j++)
		{
			
			for(k=6;k<9;k++)
			{
				if(j-i!=3&&k-j!=3&&k-i!=6)
				{
					move=0;
	                index=0;
					move+=(a[i]+a[j]+a[k]);
					if(move>temp)
					{
						i1=i;
						j1=j-3;
						k1=k-6;
						temp=move;
						
					}
					else if(move==temp)
					{
						if(str[i1]>=str[i])
						{
							if(str[i1]>str[i])
							index=1;
							if(str[j1]>=str[j-3]&&index==0)
							{
							  if(str[j1]>str[j-3])
							  index=1;
							  if(str[k1]>=str[k-6]&&index==0)
							 {
							 	if(str[k1]>str[k-6])
							 	index=1;
							 }
							}
						}
						if(index==1)
						{
							i1=i;
						    j1=j-3;
						    k1=k-6;
						}
						
					}
			}
			
		}
	}
}
	printf("%c%c%c ",str[i1],str[j1],str[k1]);
	printf("%d\n",sum-temp);

}
