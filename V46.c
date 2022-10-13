#include <stdio.h>
int num[10];
char name[10][8];

void Output ()
{
	int i;

	for (i=0;i<10;i++)
	{
		printf("%d %s\n",num[i],name[i]);
	}		
	
}
void sort ()
{

	int i,j;
	int k;
	char a;
	int q;
	
	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			
			if(num[j]<num[i])
			{
				k=num[i];
				num[i]=num[j];
				num[j]=k;
				for (q=0;q<8;q++)
				{
					a=name[i][q];
					name[i][q]=name[j][q];
					name[j][q]=a;
					
				}			
				
			}
		}
	}	
}
void Input ()
{
	int i;
	for (i=0;i<10;i++)
	{	
		scanf("%d %s",&num[i],&name[i]);		
	}	
}
int main()
{
	Input();
	sort();
	Output();	
	return 0;
} 
