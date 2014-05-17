#include<stdio.h>
#include<conio.h>
int main()
{
	char ch='|';
	int value[5];
	for(int i=0;i<5;i++)
	scanf("%d",&value[i]);
	printf("Histagram");
	for(int i=0;i<5;i++)
	{
		printf("\n\n\n");
		for(int j=0;j<3;j++)
		{
			if(j==1)
			printf("GROUP-%d|",i+1);
			else
			{
				printf("%8c",ch);
			}
			for(int o=1;o<=value[i];o++)	
			printf("*");
			printf("\n");
		}
	}
}
